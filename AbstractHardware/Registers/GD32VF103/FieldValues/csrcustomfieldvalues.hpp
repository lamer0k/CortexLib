// Filename: scrcustomfieldvalues.hpp
// Created by by Sergey Kolody  on 14.07.2020.
//
// Copyright (c) 2020 Metran All rights reserved.
#pragma once

#include "corefieldvalue.hpp"     //for FieldValues

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MEPC_CMMON_CODE_ENTRY_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{

} ;
template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MEPC_MTVT2EN_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using MtvecIsTrapAddress = CoreFieldValue<CSR_MEPC_MTVT2EN_Values, BaseType, 0U> ;
    using Mtvt2IsTrapAddress = CoreFieldValue<CSR_MEPC_MTVT2EN_Values, BaseType, 1U> ;
} ;


template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MMISC_CTL_NMI_CAUSE_FFF_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using MnvecIsPcResetNmiIs1 = CoreFieldValue<CSR_MMISC_CTL_NMI_CAUSE_FFF_Values, BaseType, 0U> ;
    using MnvecIsMtvecNmiIsFFF = CoreFieldValue<CSR_MMISC_CTL_NMI_CAUSE_FFF_Values, BaseType, 1U> ;

    using MnvecIsPcResetNmiIs1Mask = CoreFieldValueMask<CSR_MMISC_CTL_NMI_CAUSE_FFF_Values, BaseType, 1U> ;
    using MnvecIsMtvecNmiIsFFFMask = CoreFieldValueMask<CSR_MMISC_CTL_NMI_CAUSE_FFF_Values, BaseType, 1U> ;

} ;


template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MCOUNTINHIBIT_CY_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using McyclesOn = CoreFieldValue<CSR_MCOUNTINHIBIT_CY_Values, BaseType, 0U> ;
    using McyclesOff = CoreFieldValue<CSR_MCOUNTINHIBIT_CY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MCOUNTINHIBIT_IR_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using MinstretOn = CoreFieldValue<CSR_MCOUNTINHIBIT_IR_Values, BaseType, 0U> ;
    using MinstretOff = CoreFieldValue<CSR_MCOUNTINHIBIT_IR_Values, BaseType, 1U> ;
} ;