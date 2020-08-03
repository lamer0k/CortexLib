// Filename: scrfieldvalues.hpp
// Created by by Sergey Kolody  on 14.07.2020.

#pragma once

#include "corefieldvalue.hpp"     //for CoreFieldValues

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MCAUSE_EXCCODE_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using InstructionAddressMisaligned = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 0U> ;
    using InstructionAccessFault     = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 1U> ;
    using IllegalInstruction        = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 2U> ;
    using Breakpoint        = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 3U> ;
    using LoadAddressMisaligned    = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 4U> ;
    using LoadAccessFault        = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 5U> ;
    using StoreAmoAddressMisaligned = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 6U> ;
    using StoreAmoAccessFault = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 7U> ;
    using EnvironmentCallFromUserMode  = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 8U> ;
    using EnvironmentCallFromSupervisorMode  = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 9U> ;
    using EnvironmentCallFromMachineMode  = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 11U> ;
    using InstructionPageFault         = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 12U> ;
    using LoadPageFault         = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 13U> ;
    using StoreAmoPageFault         = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 15U> ;

    using UserSoftwareInterrupt     = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 0U> ;
    using SupervisorSoftwareInterrupt  = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 1U> ;
    using MachineSoftwareInterrupt        = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 3U> ;
    using UserTmerInterrupt    = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 4U> ;
    using SupervisorTimerInterrupt        = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 5U> ;
    using MachineTimerInterrupt = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 7U> ;
    using UserExternalInterrupt  = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 8U> ;
    using SupervisorExternalInterrupt  = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 9U> ;
    using MachineExternalInterrupt  = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 11U> ;

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MCAUSE_INTERRUPT_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using ExceptionOrNmi = CoreFieldValue<CSR_MCAUSE_INTERRUPT_Values, BaseType, 0U> ;
    using Interrupt = CoreFieldValue<CSR_MCAUSE_INTERRUPT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MEPC_EPC_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{

} ;