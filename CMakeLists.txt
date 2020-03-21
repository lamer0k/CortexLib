cmake_minimum_required(VERSION 3.13)

project(Registers)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXECUTABLE_SUFFIX ".elf")

set(CMAKE_VERBOSE_MAKEFILE on)

#set(CMAKE_COMPILER_PATH "Y:/SKolody_main/Mob_Point_Lev/Hydrastep/04_Design/03_Software/05_Source/_iar_tools/Embedded_Workbench/arm/bin")
#set(CMAKE_COMPILER_INCLUDE_PATH "Y:/SKolody_main/Mob_Point_Lev/Hydrastep/04_Design/03_Software/05_Source/_iar_tools/Embedded_Workbench/arm/inc/cpp")
#set(CMAKE_CXX_FLAGS_DEBUG "--debug --no_cse --no_unroll --no_inline --no_code_motion --no_tbaa --no_clustering --no_scheduling --endian=little --cpu=Cortex-M4 -e --fpu=VFPv4_sp --c++ --no_exceptions --no_rtti")
#set(CMAKE_MAKE_PROGRAM "C:/Program Files (x86)/IBM/RationalSDLC/ClearCase/bin/clearmake.exe")

#set(CMAKE_C_COMPILER "${CMAKE_COMPILER_PATH}/iccarm.exe")
#set(CMAKE_CXX_COMPILER "${CMAKE_COMPILER_PATH}/iccarm.exe")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --no_cse --no_unroll --no_inline --no_code_motion --no_tbaa --no_clustering --no_scheduling --endian=little --cpu=Cortex-M4 -e --fpu=VFPv4_sp --c++ --no_exceptions --no_rtti")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} --redirect _Printf=_PrintfFullNoMb  --redirect _Scanf=_ScanfFullNoMb  --config ${CMAKE_SOURCE_DIR}/stm32f411xE.icf --semihosting --entry __iar_program_start --vfe --text_out locale")
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --no_cse --no_unroll --no_inline --no_code_motion --no_tbaa --no_clustering --no_scheduling --endian=little --cpu=Cortex-M4 -e --fpu=VFPv4_sp")


include_directories(${CMAKE_SOURCE_DIR}/AbstractHardware/Registers
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/Pin
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/Port
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/Timer
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/Timer/Stm32Fxx/STM32F411
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/Spi
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/Uart
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/Uart/Stm32Fxx
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/Uart/Stm32Fxx/STM32F411
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/InterruptHandler
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/SystemClock
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/EdpElink
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/Atomic
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/Adc
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/Smbus
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/Mlx90614
                    ${CMAKE_SOURCE_DIR}/Application/Led
                    ${CMAKE_SOURCE_DIR}/Application
                    ${CMAKE_SOURCE_DIR}/Application/Gui
                    ${CMAKE_SOURCE_DIR}/Application/Gui/Fonts
                    ${CMAKE_SOURCE_DIR}/Common
                    ${CMAKE_SOURCE_DIR}/Common/CriticalSection
                    ${CMAKE_SOURCE_DIR}/Common/Observer
                    ${CMAKE_SOURCE_DIR}/Common/RomObject
                  #  ${CMAKE_SOURCE_DIR}/Tools/RegistersGenerator/Stm32F411
                  #  ${CMAKE_SOURCE_DIR}/Tools/RegistersGenerator/Stm32F411/FieldValues
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/Registers/CortexM4
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/Registers/CortexM4/FieldValues
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/Registers/STM32F411
                    ${CMAKE_SOURCE_DIR}/AbstractHardware/Registers/STM32F411/FieldValues
                    ${CMAKE_SOURCE_DIR}/Common/PatternMatching
                #    ${CMAKE_SOURCE_DIR}/AbstractHardware/Flash/Stm32Fxx/STM32F411/Source
                 #   ${CMAKE_SOURCE_DIR}/AbstractHardware/Flash/Stm32Fxx/STM32F303/Source

                 #    ${CMAKE_SOURCE_DIR}/Tools/RegistersGenerator/Msp432P401Y
                 #    ${CMAKE_SOURCE_DIR}/Tools/RegistersGenerator/Msp432P401Y/BitsField

        #   ${CMAKE_SOURCE_DIR}/AbstractHardware/Registers/STM32F411
                #   ${CMAKE_SOURCE_DIR}/AbstractHardware/Registers/STM32F411/BitsField
        )

add_executable(Registers
               startup.cpp
               main.cpp Common/Observer/observers.hpp
        AbstractHardware/Timer/Stm32Fxx/STM32F411/hardwaretimeroverflow.hpp
               AbstractHardware/Timer/timerobserver.hpp
        AbstractHardware/Timer/Stm32Fxx/STM32F411/hardwaretimercc.hpp
        AbstractHardware/Uart/Stm32Fxx/STM32F303/hardwareuarttx.hpp
               AbstractHardware/Uart/uartobservers.hpp
               AbstractHardware/Uart/uartdriver.hpp
        AbstractHardware/Uart/Stm32Fxx/STM32F303/hardwareuarttc.hpp
        AbstractHardware/Uart/Stm32Fxx/STM32F303/hardwareuartrx.hpp
               Application/application.hpp
               AbstractHardware/Uart/uartdriverobservers.hpp
               AbstractHardware/Uart/uartdriverconfig.hpp
               AbstractHardware/Timer/systemtimer.hpp
        AbstractHardware/Adc/hardwareadc.hpp Common/RomObject/memoryobject.hpp AbstractHardware/Smbus/smbus.hpp AbstractHardware/Mlx90614/mlx90614.hpp AbstractHardware/Timer/delaytimer.hpp AbstractHardware/Smbus/Stm32F4xx/STM32F411/hardwaresmbus.hpp)

