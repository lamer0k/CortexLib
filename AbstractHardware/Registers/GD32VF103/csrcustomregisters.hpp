// Filename: scrcustomregisters.hpp
// Created by by Sergey Kolody  on 14.07.2020.

#pragma once

//#include "csrregisters.hpp"  //for Bits Fields defs
#include "csrcustomfieldvalues.hpp"  //for Bits Fields defs

struct CSRCUSTOM
{
    struct MTVT2Base
    {
    };
    struct MTVT2 : public CoreRegisterBase<0x7EC, 32, ReadWriteMode>
    {
        using MTVT2EN = CSR_MEPC_MTVT2EN_Values<CSRCUSTOM::MTVT2, 0, 1, ReadWriteMode, MTVT2Base>;
        using FieldValues = CSR_MEPC_EPC_Values<CSRCUSTOM::MTVT2, 0, 0, NoAccess, NoAccess>;
    };
    template<typename... T>
    using MTVT2Pack = CoreRegister<0x7EC, 32, ReadWriteMode, MTVT2Base, T...>;

    struct MMISC_CTLBase
    {
    };

    struct MMISC_CTL : public CoreRegisterBase<0x7D0, 32, ReadWriteMode>
    {
        using NMI_CAUSE_FFF = CSR_MMISC_CTL_NMI_CAUSE_FFF_Values<CSRCUSTOM::MMISC_CTL, 9, 1, ReadWriteMode, MMISC_CTLBase>;
        using FieldValues = CSR_MMISC_CTL_NMI_CAUSE_FFF_Values<CSRCUSTOM::MMISC_CTL, 0, 0, NoAccess, NoAccess>;
    };
    template<typename... T>
    using MMISC_CTLPack = CoreRegister<0x7EC, 32, ReadWriteMode, MMISC_CTLBase, T...>;


    struct MCOUNTINHIBITBase
    {
    };

    struct MCOUNTINHIBIT : public CoreRegisterBase<0x320, 32, ReadWriteMode>
    {
        using IR = CSR_MCOUNTINHIBIT_IR_Values<CSRCUSTOM::MCOUNTINHIBIT, 2, 1, ReadWriteMode, MCOUNTINHIBITBase>;
        using CY = CSR_MCOUNTINHIBIT_CY_Values<CSRCUSTOM::MCOUNTINHIBIT, 0, 1, ReadWriteMode, MCOUNTINHIBITBase>;
        using FieldValues = CSR_MCOUNTINHIBIT_CY_Values<CSRCUSTOM::MMISC_CTL, 0, 0, NoAccess, NoAccess>;
    };
    template<typename... T>
    using MCOUNTINHIBITPack = CoreRegister<0x320, 32, ReadWriteMode, MCOUNTINHIBITBase, T...>;

};

