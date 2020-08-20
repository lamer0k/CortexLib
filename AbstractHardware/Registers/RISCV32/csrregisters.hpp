// Filename: scrregisters.hpp
// Created by by Sergey Kolody  on 14.07.2020.
//
// Copyright (c) 2020 Metran All rights reserved.
#pragma once

#include "csrfieldvalues.hpp"  //for Bits Fields defs
#include "coreregisterbase.hpp"   //for CoreRegisterBase
#include "coreregister.hpp"       //for CoreRegister
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode

struct CSR
{
    struct MCAUSEBase   {  };
    struct MCAUSE : public CoreRegisterBase<0x342, 32, ReadWriteMode>
    {
        using INTERRUPT = CSR_MCAUSE_INTERRUPT_Values<CSR::MCAUSE, 31, 1, ReadMode, MCAUSEBase> ;
        using MINHV = CSR_MCAUSE_MINHV_Values<CSR::MCAUSE, 30, 1, ReadMode, MCAUSEBase> ;
        using MPP = CSR_MCAUSE_MPP_Values<CSR::MCAUSE, 28, 2, ReadMode, MCAUSEBase> ;
        using MPIE = CSR_MCAUSE_MPIE_Values<CSR::MCAUSE, 27, 1, ReadMode, MCAUSEBase> ;
        using MPIL = CSR_MCAUSE_MPIL_Values<CSR::MCAUSE, 16, 8, ReadMode, MCAUSEBase> ;
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


    struct MTVTBase { };
    struct MTVT : public CoreRegisterBase<0x307, 32, ReadWriteMode>
    {
       // using VECTBLADDR = CSR_MTVT_VECTBLADDR_Values<CSR::MTVT, 0, 32, ReadWriteMode, MTVTBase> ;
       // using FieldValues = CSR_MTVT_VECTBLADDR_Values<CSR::MTVT, 0, 0, NoAccess, NoAccess> ;
    };
    template<typename... T>
    using MTVTPack  = CoreRegister<0x307, 32, ReadWriteMode, MEPCBase, T...> ;

    struct MTVECBase { };
    struct MTVEC : public CoreRegisterBase<0x305, 32, ReadWriteMode>
    {
        using ADDR = CSR_MTVEC_ADDR_Values<CSR::MTVEC, 6, 23, ReadWriteMode, MTVECBase> ;
        using MODE = CSR_MTVEC_MODE_Values<CSR::MTVEC, 0, 6, ReadWriteMode, MTVECBase> ;
        using FieldValues = CSR_MTVT_VECTBLADDR_Values<CSR::MTVEC, 0, 0, NoAccess, NoAccess> ;
    };
    template<typename... T>
    using MTVECPack  = CoreRegister<0x307, 32, ReadWriteMode, MEPCBase, T...> ;


    struct MSTATUSBase   {  };
    struct MSTATUS : public CoreRegisterBase<0x300, 32, ReadWriteMode>
    {
        using SD = CSR_MSTATUS_SD_Values<CSR::MSTATUS, 31, 1, ReadMode, MSTATUSBase> ;
        using XS = CSR_MSTATUS_XS_Values<CSR::MSTATUS, 15, 2, ReadMode, MSTATUSBase> ; //FIXME for GD is ReadWrite
        using FS  = CSR_MSTATUS_FS_Values<CSR::MSTATUS, 13, 2, ReadWriteMode, MSTATUSBase> ;
        using MPP = CSR_MSTATUS_MPP_Values<CSR::MSTATUS, 11, 2, ReadWriteMode, MSTATUSBase> ;
        using MPIE = CSR_MSTATUS_MPIE_Values<CSR::MSTATUS, 7, 1, ReadMode, MSTATUSBase> ;
        using MIE = CSR_MSTATUS_MIE_Values<CSR::MSTATUS, 3, 1, ReadMode, MSTATUSBase> ;

        using FieldValues = CSR_MSTATUS_MIE_Values<CSR::MCAUSE, 0, 0, NoAccess, NoAccess> ;
    };
    template<typename... T>
    using MSTATUSPack  = CoreRegister<0x300, 32, ReadWriteMode, MSTATUSBase, T...> ;



} ;


