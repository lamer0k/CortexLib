// Filename: scrcustomregisters.hpp
// Created by by Sergey Kolody  on 14.07.2020.

#pragma once

#include "csrregisters.hpp"  //for Bits Fields defs
#include "csrfieldvalues.hpp"  //for Bits Fields defs


struct CSRCUSTOM
{
    struct MCAUSEBase   {  };
    struct MCAUSE: public CSR::MCAUSE
    {

        using MINHV = CSRCUSTOM_MCAUSE_MINHV_Values<CSR::MCAUSE, 30, 2, ReadWriteMode, MCAUSEBase> ;
        using MPP = CSRCUSTOM_MCAUSE_MPP_Values<CSR::MCAUSE, 28, 2, ReadWriteMode, MCAUSEBase> ;
        using MPIE = CSRCUSTOM_MCAUSE_MPIE_Values<CSR::MCAUSE, 27, 1, ReadWriteMode, MCAUSEBase> ;
        using MPIL = CSRCUSTOM_MCAUSE_MPIL_Values<CSR::MCAUSE, 23, 18, ReadWriteMode, MCAUSEBase> ;

    };
    template<typename... T>
    using MCAUSEPack  = Register<0x342, 32, ReadWriteMode, MCAUSEBase, T...> ;

    struct MEPCBase { };
    struct MEPC : public RegisterBase<0x341, 32, ReadWriteMode>
    {
        using EPC = CSR_MEPC_EPC_Values<CSR::MEPC, 1, 31, ReadWriteMode, MACHINETIMERBase> ;
        using FieldValues = CSR_MEPC_Values<CSR::MEPC, 0, 0, NoAccess, NoAccess> ;
    };
    template<typename... T>
    using MEPCPack  = Register<0x341, 32, ReadWriteMode, MEPCBase, T...> ;

} ;

