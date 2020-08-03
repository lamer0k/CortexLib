// Filename: scrregisters.hpp
// Created by by Sergey Kolody  on 14.07.2020.
//
// Copyright (c) 2020 Metran All rights reserved.
#pragma once

#include "scrfieldvalues.hpp"  //for Bits Fields defs
#include "coreregisterbase.hpp"   //for CoreRegisterBase
#include "coreregister.hpp"       //for CoreRegister
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode

struct CSR
{
    struct MCAUSEBase   {  };
    struct MCAUSE : public CoreRegisterBase<0x342, 32, ReadMode>
    {
        using INTERRUPT = CSR_MCAUSE_INTERRUPT_Values<CSR::MCAUSE, 31, 1, ReadMode, MCAUSEBase> ;
       // using MINHV = CSR_MCAUSE_MINHV_Values<CSR::MCAUSE, 30, 2, ReadWriteMode, MCAUSEBase> ;
       // using MPP = CSR_MCAUSE_MPP_Values<CSR::MCAUSE, 28, 2, ReadWriteMode, MCAUSEBase> ;
        //using MPIE = CSR_MCAUSE_MPIE_Values<CSR::MCAUSE, 27, 1, ReadWriteMode, MCAUSEBase> ;
       // using MPIL = CSR_MCAUSE_MPIL_Values<CSR::MCAUSE, 23, 18, ReadWriteMode, MCAUSEBase> ;
        using EXCCODE = CSR_MCAUSE_EXCCODE_Values<CSR::MCAUSE, 0, 12, ReadMode, MCAUSEBase> ;
        using FieldValues = CSR_MCAUSE_EXCCODE_Values<CSR::MCAUSE, 0, 0, NoAccess, NoAccess> ;
    };
    template<typename... T>
    using MCAUSEPack  = CoreRegister<0x342, 32, ReadWriteMode, MCAUSEBase, T...> ;

    struct MEPCBase { };
    struct MEPC : public CoreRegisterBase<0x341, 32, ReadWriteMode>
    {
        using EPC = CSR_MEPC_EPC_Values<CSR::MEPC, 1, 31, ReadWriteMode, MEPCBase> ;
        using FieldValues = CSR_MEPC_EPC_Values<CSR::MEPC, 0, 0, NoAccess, NoAccess> ;
    };
    template<typename... T>
    using MEPCPack  = CoreRegister<0x341, 32, ReadWriteMode, MEPCBase, T...> ;

} ;


