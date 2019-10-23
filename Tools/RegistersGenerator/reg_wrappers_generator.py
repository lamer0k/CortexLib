from cmsis_svd.parser import SVDParser
from cmsis_svd.model import SVDRegister
from cmsis_svd.model import SVDField
import os
import argparse
import re

access_mode = {
    'read-only': 'ReadMode',
    'write-only': 'WriteMode',
    'read-write': 'ReadWriteMode',
    'writeOnce': 'WriteMode',
    'read-WriteOnce': 'ReadWriteMode',
    None: 'ReadWriteMode'
}

register_types = {
    'register_base': 'RegisterBase',
    'register_pack': 'Register'
}

fieldvalue_types = {
    'read-only': 'ReadMode',
    'write-only': 'WriteMode',
    'read-write': 'ReadWriteMode',
    'writeOnce': 'WriteMode',
    'read-WriteOnce': 'ReadWriteMode',
    None: 'ReadWriteMode'
}

register_field_types = {
    'read-only': 'ReadMode',
    'write-only': 'WriteMode',
    'read-write': 'ReadWriteMode',
    'writeOnce': 'WriteMode',
    'read-WriteOnce': 'ReadWriteMode',
    None: 'ReadWriteMode'
}

bits_field_max_width = 5

class Device:
    def __init__(self, name, access, size):
        self.name = name
        self.access = access
        self.size = size
        self.peripherals = []

class Peripheral:
    def __init__(self, name, base_address, access, size, description):
        self.name = name
        self.base_address = base_address
        self.access = access
        self.size = size
        self.description = description
        self.registers = []
        
class Register:
    def __init__(self, name, address, access, size, description):
        self.name = name
        self.address = address
        self.access = access
        self.size = size
        self.description = description
        self.fields = []
        self.type = ''
        
class Field:
    def __init__(self, name, access, bit_offset, bit_width, description, is_fieldvalue):
        self.name = name
        self.access = access
        self.bit_offset = bit_offset
        self.bit_width = bit_width
        self.description = description,
        self.is_fieldvalue = False
        self.fieldvalue_values = None

        
class FieldValue:
    def __init__(self, name, value, description):
        self.name = name
        self.value = value
        self.description = description


def find_bits_field(list, name):
    result = False
    for item in list:
        if (item == name):
            result = True
            break
    return result

#def cut_bits_field(bits_filed):
#    name = re.sub(r'[^\w\s]+|[\d]+', r'',bits_filed).strip()
#   # name = bits_filed
#    return name

def process_device(raw_device):
    result = Device(
        raw_device.name,
        raw_device.access,
        raw_device.size)
    
    if (raw_device.peripherals != None):
        for peripheral in raw_device.peripherals:
            result.peripherals.append(process_peripheral(peripheral, result))
    
    return result

def process_peripheral(raw_peripheral, device):
    if (raw_peripheral.derived_from != None):
        base_peripheral = raw_peripheral.get_derived_from()
        
        result = Peripheral(
            raw_peripheral.name,
            raw_peripheral._base_address if (raw_peripheral._base_address != None) else base_peripheral._base_address, 
            raw_peripheral._access if (raw_peripheral._access != None) else base_peripheral._access, 
            raw_peripheral._size if (raw_peripheral._size != None) else base_peripheral._size,
            raw_peripheral._description if (raw_peripheral._description != None) else base_peripheral._description)
        
        if (raw_peripheral._registers != None):
            for raw_register in raw_peripheral._registers:
                result.registers.append(process_register(raw_register, result))
        else:
            if (base_peripheral._registers != None):
                for raw_register in base_peripheral._registers:
                    result.registers.append(process_register(raw_register, result))
    else:
        result = Peripheral(
            raw_peripheral.name, 
            raw_peripheral._base_address, 
            raw_peripheral._access if (raw_peripheral._access != None) else device.access, 
            raw_peripheral._size if (raw_peripheral._size != None) else device.size,
            raw_peripheral._description)
        
        if (raw_peripheral._registers != None):
            for raw_register in raw_peripheral._registers:
                result.registers.append(process_register(raw_register, result))

            if(raw_peripheral._register_arrays != None):

                for raw_register in raw_peripheral._register_arrays:
                    for i in range(raw_register.dim):
                        _name = raw_register.name % raw_register.dim_indices[i]
                        _name = _name.replace('[','')
                        _name = _name.replace(']','')
                        reg = SVDRegister(
                            name = _name,
                            fields = raw_register._fields,
                            fields_array = raw_register._fields_array,
                            derived_from = raw_register.derived_from,
                            description = raw_register.description,
                            address_offset = raw_register.address_offset + raw_register.dim_increment * i,
                            size = raw_register._size,
                            access = raw_register._access,
                            protection = raw_register._protection,
                            reset_value = raw_register._reset_value,
                            reset_mask = raw_register._reset_mask,
                            display_name = raw_register._display_name,
                            alternate_group = raw_register._alternate_group,
                            modified_write_values = raw_register._modified_write_values,
                            read_action = raw_register._read_action,
                        )
                        result.registers.append(process_register(reg, result))

    return result
    
def process_register(raw_register, peripheral):
    if (raw_register.derived_from != None):
        base_register = raw_register.get_derived_from()
        address_offset = raw_register.address_offset if (raw_register.address_offset != None) else base_register.address_offset
        
        result = Register(
            raw_register.name, 
            peripheral.base_address + address_offset, 
            raw_register._access if (raw_register._access != None) else base_register._access, 
            raw_register._size if (raw_register._size != None) else base_register._size,
            raw_register.description if (raw_register.description != None) else base_register.description)
        
        if (raw_register._fields != None):
            for field in raw_register._fields:
                result.fields.append(process_field(field, result,peripheral))
        else:
            if (base_register._fields != None):
                for field in base_register._fields:
                    result.fields.append(process_field(field, result,peripheral))
    else:        
        result = Register(
            raw_register.name, 
            peripheral.base_address + raw_register.address_offset, 
            raw_register._access if (raw_register._access != None) else peripheral.access, 
            raw_register._size if (raw_register._size != None) else peripheral.size,
            raw_register.description
            )
        
        if (raw_register._fields != None):
            for field in raw_register._fields:
                result.fields.append(process_field(field, result, peripheral))

            if(raw_register._fields_array != None):
               for raw_field in raw_register._fields_array:
                    if (raw_field.derived_from != None):
                        base_field = raw_field.get_derived_from()
                        enumerated_values = base_field.enumerated_values
                        access = base_field.access
                        modified_write_values = base_field.modified_write_values
                        read_action = base_field.read_action
                    else:
                        enumerated_values = raw_field.enumerated_values
                        access = raw_field.access
                        modified_write_values = raw_field.modified_write_values
                        read_action = raw_field.read_action

                    for i in range(raw_field.dim):
                        _name = raw_field.name % raw_field.dim_indices[i]
                        _name = _name.replace('[','')
                        _name = _name.replace(']','')
                        field = SVDField(
                            name = _name,
                            derived_from = raw_field.derived_from,
                            description = raw_field.description,
                            bit_offset = raw_field.bit_offset + raw_field.dim_increment * i ,
                            bit_width = raw_field.bit_width,
                            access = access,
                            enumerated_values = enumerated_values,
                            modified_write_values = modified_write_values,
                            read_action = read_action,
                        )
                        result.fields.append(process_field(field, result, peripheral))
    
    return result
    
def process_field(raw_field, register, peripheral):
    if (raw_field.derived_from != None):
        base_field = raw_field.get_derived_from()
    
        result = Field(
            raw_field.name, 
            raw_field.access if (raw_field.access != None) else base_field.access, 
            raw_field.bit_offset if (raw_field.bit_offset != None) else base_field.bit_offset, 
            raw_field.bit_width if (raw_field.bit_width != None) else base_field.bit_width,
            raw_field.description if (raw_field.description != None) else base_field.description,
            True
        )

        if (raw_field.enumerated_values != None):
            result.fieldvalue_values = []

            for value in raw_field.enumerated_values:
                result.fieldvalue_values.append(process_fieldvalue_value(value))
        else:
            if (base_field.enumerated_values != None):
                result.fieldvalue_values = []
        
                for value in base_field.enumerated_values:
                    result.fieldvalue_values.append(process_fieldvalue_value(value))
            else:
                result.fieldvalue_values = []
                if (raw_field.bit_width <= bits_field_max_width):
                    for i in range(raw_field.bit_width):
                        res = process_fieldvalue_none(peripheral, register, raw_field, i, raw_field.description)
                    if(res != None):
                        result.fieldvalue_values.append(res)
                        result.is_fieldvalue = False
                else:
                    pass #Fixme
                
    else:
        result = Field(
            raw_field.name, 
            raw_field.access if (raw_field.access != None) else register.access, 
            raw_field.bit_offset, 
            raw_field.bit_width,
            raw_field.description,
            True
        )
            
        if (raw_field.enumerated_values != None):
            result.fieldvalue_values = []
        
            for value in raw_field.enumerated_values:
                result.fieldvalue_values.append(process_fieldvalue_value(value))
        else:
            result.fieldvalue_values = []
            if (raw_field.bit_width <= bits_field_max_width):
                for i in range(2 ** raw_field.bit_width):
                    res = process_fieldvalue_none(peripheral, register, raw_field, i, raw_field.description)
                    if(res != None):
                        result.fieldvalue_values.append(res)
                        result.is_fieldvalue = False
            else:
                pass #Fixme
    
    return result

def process_fieldvalue_none(peripheral, register, field, value, description):

   # name = '{}_{}_{}_Values'.format(
   #     camel_case(peripheral.name),
   #     camel_case(register.name),
   #     camel_case(field.name))
    name = 'Value' + str(value)
    return FieldValue(
        name,
        str(value),
        description)

def process_fieldvalue_value(raw_fieldvalue_value):

    return FieldValue(
        raw_fieldvalue_value.name,
        raw_fieldvalue_value.value,
        raw_fieldvalue_value.description)

def camel_case(str):
    result = re.sub(r'[\W]', '_', str).strip()
    if (re.match(r'\d', result) != None):
       result = '_' + result
    else:
        pass
    return result
    #return str.title().replace('_', '')

def generate_peripheral(peripheral, registers_file, enumerations_file = None):
    registers_file.write('struct {}\n'.format(
        camel_case(peripheral.name), 
        peripheral.base_address, 
        peripheral.access, 
        peripheral.size))
    registers_file.write('{\n')
    
    for register in peripheral.registers:
        generate_register_base(
            peripheral,
            register,
            registers_file,
            enumerations_file)

        generate_register_pack(
            peripheral,
            register,
            registers_file)

    registers_file.write('} ;\n')
    registers_file.write('\n')


def generate_register_pack(peripheral, register, registers_file):
    registers_file.write('  template<typename... T> \n')
    registers_file.write('  using {}Pack  = {}<0x{:X}, {}, {}, {}Base, T...> ;\n'.format(
        camel_case(register.name),
        register_types['register_pack'],
        register.address,
        register.size,
        access_mode[register.access],
        camel_case(peripheral.name) + camel_case(register.name)
        ))
    registers_file.write('\n')

def generate_register_base(peripheral, register, registers_file, enumerations_file):

    generate_bits_filed_base(peripheral, register, registers_file)
    registers_file.write('  struct {} : public {}<0x{:X}, {}, {}>\n'.format(
        camel_case(register.name),
        register_types['register_base'],
        register.address,
        register.size,
        access_mode[register.access]
        ))
    
    registers_file.write('  {\n')
    fieldvalue_class_name = ""
    for field in register.fields:
        fieldvalue_class_name = generate_field(
            peripheral, 
            register, 
            field, 
            registers_file, 
            enumerations_file)
    if (fieldvalue_class_name != ''):
        registers_file.write('    using FieldValues = {}<{}::{}, 0, 0, NoAccess, NoAccess> ;\n'.format(
            fieldvalue_class_name,
            camel_case(peripheral.name),
            camel_case(register.name)
        ))
    registers_file.write('  } ;\n')
    registers_file.write('\n')

def generate_field(peripheral, register, field, registers_file, bitsfiled_file):
    field_name = camel_case(field.name)
    access = fieldvalue_types[field.access]

    if (camel_case(register.name) == camel_case(field.name)):
        field_name = '{}Field'.format(field_name)

    #if ((field.enumerated_values != None) or (field.bit_width <= bits_field_max_width)):
    name = (
        '{}_{}_{}_Values'.format(
        camel_case(peripheral.name),
        camel_case(register.name),
        camel_case(field.name)))
    fieldvalue_class_name = name
#    if (field.is_fieldvalue ):
#        fieldvalue_class_name = name
#    else:
#        fieldvalue_class_name = cut_bits_field(name)

    name = '{}_{}_{}_'.format(
        camel_case(peripheral.name),
        camel_case(register.name),
        camel_case(field.name))
    fieldvalue_name = name
#    if (field.is_fieldvalue):
#        fieldvalue_name = name
#    else:
#        fieldvalue_name = cut_bits_field(name)



  #  access = fieldvalue_types['read-write'] ;

    if (field.fieldvalue_values != None):
        registers_file.write('    using {} = {}<{}::{}, {}, {}, {}, {}Base> ;\n'.format(
            field_name,
            fieldvalue_class_name,
            camel_case(peripheral.name),
            camel_case(register.name),
            field.bit_offset,
            field.bit_width,
            access,
            #fieldvalue_types[access],

            camel_case(peripheral.name) + camel_case(register.name)))
    else:
        registers_file.write('    using {} = {}<{}::{}, {}, {}, {}, {}Base> ;\n'.format(
            field_name,
            fieldvalue_class_name,
            camel_case(peripheral.name),
            camel_case(register.name),
            field.bit_offset,
            field.bit_width,
            access,
            #fieldvalue_types[access],

            fieldvalue_name))
            
    if (bitsfiled_file != None):
        generate_bits_field(peripheral, register, field, fieldvalue_class_name, bitsfiled_file)

    return fieldvalue_class_name ;
 #   else:
 #       registers_file.write('    using {} = RegisterField<{}::{}, {}, {}> ;\n'.format(
 #           field_name,
 #           fieldvalue_types[field.access],
 #           camel_case(peripheral.name),
 #           camel_case(register.name),
 #           field.bit_offset,
 #           field.bit_width))

bits_field_list = []

def generate_bits_filed_base(peripherial, register, bits_field_file):
    name = '  struct {}Base '.format(camel_case(peripherial.name) + camel_case(register.name))
    bits_field_file.write(name)
    bits_field_file.write('{} ;\n')
    bits_field_file.write('\n')


def generate_bits_field(peripherial, register, field, fieldvalue_name, bits_field_file):
   if ((find_bits_field(bits_field_list, fieldvalue_name) == False) or (field.is_fieldvalue)):
        if (field.is_fieldvalue == False):
            bits_field_list.append(fieldvalue_name)
        bits_field_file.write('template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> \n')
        bits_field_file.write('struct {}: public RegisterField<Reg, offset, size, AccessMode> \n'.format(fieldvalue_name))
        #bits_field_file.write('template <typename Field, typename BaseType> \n')
        #bits_field_file.write('struct {}: public RegisterField<Field::Register, Field::Offset, Field::Size, Field::Access> \n'.format(fieldvalue_name))

        bits_field_file.write('{\n')
        if(field.fieldvalue_values == None):
            bits_field_list.remove(fieldvalue_name)
    
        if (field.fieldvalue_values != None):
            for value in field.fieldvalue_values:
                if (field.bit_width <= bits_field_max_width):
                    #bits_field_file.write('  using {} = FieldValue<Reg, offset, size, AccessMode, BaseType, {}U> ;\n'.format(camel_case(value.name), value.value))
                    bits_field_file.write('  using {} = FieldValue<{}, BaseType, {}U> ;\n'.format(camel_case(value.name), fieldvalue_name, value.value))
        #else:
        #    if (field.bit_width <= bits_field_max_width):
        #        for i in range(2 ** field.bit_width):
        #            bits_field_file.write('  using Value{0} = FieldValue<Reg, offset, size, AccessMode, BaseType, {0}U> ;\n'.format(i))
        bits_field_file.write('} ;\n')
        bits_field_file.write('\n')

def split_into_lines(text, line_size):
    result = []
    line = ''
    
    for word in filter(lambda x: x != '', text.split(' ')):
        if (len(line) + len(word) <= line_size): 
            line += word + ' '
        else:
            result.append(line.rstrip(' '))
            line = word + ' '
            
    result.append(line.rstrip(' '))
            
    return result

def create_file_description(file_name, description):
    description_lines = split_into_lines(description.replace('\n', ''), 62)

    result = '/*******************************************************************************\n'
    result += '* Filename      : {}\n'.format(file_name)
    result += '*\n'
    result += '* Details       : {}\n'.format(description_lines[0])

    for line in description_lines[1:]:
        result += '*                 {}\n'.format(line)
    
    result += '*\n'
    result += '*\n'
    result += '*******************************************************************************/\n'
    
    return result

def main():  
    arg_parser = argparse.ArgumentParser()
    arg_parser.add_argument('input_file', help = 'input SVD file')
    arg_parser.add_argument('-p', metavar =  'PERIPHERAL', help = 'generate code only for specified peripheral')
    arg_parser.add_argument('-o', help = 'overwrite existing enumerations header files', action = 'store_true')
    args = arg_parser.parse_args()
    
    parser = SVDParser.for_xml_file(args.input_file)
    device = process_device(parser.get_device())

    device_name = camel_case(device.name)

    if (not os.path.isdir(device_name)):
        os.mkdir(device_name)
        
    if (not os.path.isdir('{}\FieldValues'.format(device_name))):
        os.mkdir('{}\FieldValues'.format(device_name))
        
    if (args.p != None):
        peripherals = [x for x in device.peripherals if x.name.lower() == args.p.lower()]
    else:
        peripherals = device.peripherals

    for peripheral in peripherals:
        peripheral_name = peripheral.name.lower().replace('_', '')
        reg_file_name = '{}registers.hpp'.format(peripheral_name)
        enum_file_name = '{}fieldvalues.hpp'.format(peripheral_name)
        enum_file_full_name = '{}\FieldValues\{}'.format(device_name, enum_file_name)
    
        with open('{}\{}'.format(device_name, reg_file_name), 'w') as registers_file:
            if (peripheral.description != None):
                per_description = '{}. This header file is auto-generated for {} device.'.format(
                    peripheral.description.rstrip('. '),
                    device.name)
            else:
                per_description = 'This header file is auto-generated for {} device.'.format(device.name)
            
            registers_file.write(create_file_description(reg_file_name, per_description))
                
            reg_guard = '{}REGISTERS_HPP'.format(peripheral_name.upper())
            registers_file.write('\n')
            registers_file.write('#if !defined({})\n'.format(reg_guard))
            registers_file.write('#define {}\n'.format(reg_guard))
            registers_file.write('\n')
            registers_file.write('#include "{}"  //for Bits Fields defs \n'.format(enum_file_name))
            registers_file.write('#include "registerbase.hpp"   //for RegisterBase\n')
            registers_file.write('#include "register.hpp"       //for Register\n')
            registers_file.write('#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  \n')
            registers_file.write('\n')
            
            if((args.o) or (not os.path.isfile(enum_file_full_name))):
                with open(enum_file_full_name, 'w') as enumerations_file:
                    enumerations_file.write(create_file_description(
                        enum_file_name,
                        'Enumerations related with {} peripheral. This header file is auto-generated for {} device.'.format(
                            peripheral.name,
                            device.name)))
                        
                    enum_guard = '{}ENUMS_HPP'.format(peripheral_name.upper())
                    enumerations_file.write('\n')
                    enumerations_file.write('#if !defined({})\n'.format(enum_guard))
                    enumerations_file.write('#define {}\n'.format(enum_guard))
                    enumerations_file.write('\n')
                    enumerations_file.write('#include "fieldvalue.hpp"     //for FieldValues \n')
                    enumerations_file.write('\n')
                
                    generate_peripheral(peripheral, registers_file, enumerations_file)
                    
                    enumerations_file.write('#endif //#if !defined({})\n'.format(enum_guard))
            else:
                generate_peripheral(peripheral, registers_file)
                
            registers_file.write('#endif //#if !defined({})\n'.format(reg_guard))
        
if __name__ == "__main__":
    main()