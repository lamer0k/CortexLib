// Filename: scrfieldvalues.hpp
// Created by by Sergey Kolody  on 14.07.2020.

#pragma once

#include "corefieldvalue.hpp"     //for CoreFieldValues
#include "corefiledvaluemask.hpp" // for CoreFieldValueMask

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MCAUSE_EXCCODE_Values : public CoreRegisterField<Reg, offset, size, AccessMode>
{
		using InstructionAddressMisaligned = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 0U>;
		using InstructionAccessFault = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 1U>;
		using IllegalInstruction = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 2U>;
		using Breakpoint = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 3U>;
		using LoadAddressMisaligned = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 4U>;
		using LoadAccessFault = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 5U>;
		using StoreAmoAddressMisaligned = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 6U>;
		using StoreAmoAccessFault = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 7U>;
		using EnvironmentCallFromUserMode = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 8U>;
		using EnvironmentCallFromSupervisorMode = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 9U>;
		using EnvironmentCallFromMachineMode = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 11U>;
		using InstructionPageFault = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 12U>;
		using LoadPageFault = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 13U>;
		using StoreAmoPageFault = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 15U>;

		using UserSoftwareInterrupt = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 0U>;
		using SupervisorSoftwareInterrupt = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 1U>;
		using MachineSoftwareInterrupt = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 3U>;
		using UserTmerInterrupt = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 4U>;
		using SupervisorTimerInterrupt = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 5U>;
		using MachineTimerInterrupt = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 7U>;
		using UserExternalInterrupt = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 8U>;
		using SupervisorExternalInterrupt = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 9U>;
		using MachineExternalInterrupt = CoreFieldValue<CSR_MCAUSE_EXCCODE_Values, BaseType, 11U>;

};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MCAUSE_INTERRUPT_Values : public CoreRegisterField<Reg, offset, size, AccessMode>
{
		using ExceptionOrNmi = CoreFieldValue<CSR_MCAUSE_INTERRUPT_Values, BaseType, 0U>;
		using Interrupt = CoreFieldValue<CSR_MCAUSE_INTERRUPT_Values, BaseType, 1U>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MCAUSE_MPIL_Values : public CoreRegisterField<Reg, offset, size, AccessMode>
{
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MCAUSE_MPIE_Values : public CoreRegisterField<Reg, offset, size, AccessMode>
{
		using InterruptDisabled = CoreFieldValue<CSR_MCAUSE_MPIE_Values, BaseType, 0U>;
		using InterruptEnabled = CoreFieldValue<CSR_MCAUSE_MPIE_Values, BaseType, 1U>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MCAUSE_MPP_Values : public CoreRegisterField<Reg, offset, size, AccessMode>
{
		using UserMode = CoreFieldValue<CSR_MCAUSE_MPP_Values, BaseType, 0U>;
		using SupervisorMode = CoreFieldValue<CSR_MCAUSE_MPP_Values, BaseType, 1U>;
		using MachineMode = CoreFieldValue<CSR_MCAUSE_MPP_Values, BaseType, 3U>;

        using UserModeMask = CoreFieldValueMask<CSR_MCAUSE_MPP_Values, BaseType, 1U>;
        using SupervisorModeMask = CoreFieldValueMask<CSR_MCAUSE_MPP_Values, BaseType, 1U>;
        using MachineModeMask = CoreFieldValueMask<CSR_MCAUSE_MPP_Values, BaseType, 3U>;

};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MCAUSE_MINHV_Values : public CoreRegisterField<Reg, offset, size, AccessMode>
{
		using HardwareVectoringNotInProgress = CoreFieldValue<CSR_MCAUSE_MINHV_Values, BaseType, 0U>;
		using HardwareVectoringInProgress = CoreFieldValue<CSR_MCAUSE_MINHV_Values, BaseType, 1U>;

		using HardwareVectoringNotInProgressMask = CoreFieldValueMask<CSR_MCAUSE_MINHV_Values, BaseType, 1U>;
        using HardwareVectoringInProgressMask = CoreFieldValueMask<CSR_MCAUSE_MINHV_Values, BaseType, 1U>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MEPC_EPC_Values : public CoreRegisterField<Reg, offset, size, AccessMode>
{
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MTVT_VECTBLADDR_Values : public CoreRegisterField<Reg, offset, size, AccessMode>
{
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MTVEC_ADDR_Values : public CoreRegisterField<Reg, offset, size, AccessMode>
{
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MTVEC_MODE_Values : public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using Eclic = CoreFieldValue<CSR_MTVEC_MODE_Values, BaseType, 3U>;

    using EclicMask = CoreFieldValueMask<CSR_MTVEC_MODE_Values, BaseType, 3U>;
};


template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MSTATUS_MPIE_Values : public CSR_MCAUSE_MPIE_Values<Reg, offset, size, AccessMode, BaseType>
{
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MSTATUS_MIE_Values : public CSR_MCAUSE_MPIE_Values<Reg, offset, size, AccessMode, BaseType>
{
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MSTATUS_MPP_Values : public CSR_MCAUSE_MPP_Values<Reg, offset, size, AccessMode, BaseType>
{
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MSTATUS_FS_Values : public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using Off = CoreFieldValue<CSR_MSTATUS_FS_Values, BaseType, 0U>;
    using Initial = CoreFieldValue<CSR_MSTATUS_FS_Values, BaseType, 1U>;
    using Clean = CoreFieldValue<CSR_MSTATUS_FS_Values, BaseType, 2U>;
    using Dirty = CoreFieldValue<CSR_MSTATUS_FS_Values, BaseType, 3U>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MSTATUS_XS_Values : public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using Off = CoreFieldValue<CSR_MSTATUS_XS_Values, BaseType, 0U>;
    using Initial = CoreFieldValue<CSR_MSTATUS_XS_Values, BaseType, 1U>;
    using Clean = CoreFieldValue<CSR_MSTATUS_XS_Values, BaseType, 2U>;
    using Dirty = CoreFieldValue<CSR_MSTATUS_XS_Values, BaseType, 3U>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MSTATUS_SD_Values : public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using XsAndFsAreZero = CoreFieldValue<CSR_MSTATUS_SD_Values, BaseType, 0U>;
    using XsOrFsIsSet = CoreFieldValue<CSR_MSTATUS_SD_Values, BaseType, 1U>;
};
