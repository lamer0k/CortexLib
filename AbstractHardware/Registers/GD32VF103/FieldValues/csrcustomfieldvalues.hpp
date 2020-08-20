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
struct CSR_MTVT2_MTVT2EN_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using MtvecIsTrapAddress = CoreFieldValue<CSR_MTVT2_MTVT2EN_Values, BaseType, 0U> ;
    using Mtvt2IsTrapAddress = CoreFieldValue<CSR_MTVT2_MTVT2EN_Values, BaseType, 1U> ;

    using Mtvt2EnBit0 = CoreFieldValueMask<CSR_MTVT2_MTVT2EN_Values, BaseType, 1U> ;
    using Mtvt2EnMask = CoreFieldValueMask<CSR_MTVT2_MTVT2EN_Values, BaseType, 1U> ;

} ;


template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MMISC_CTL_NMI_CAUSE_FFF_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using MnvecIsPcResetNmiIs1 = CoreFieldValue<CSR_MMISC_CTL_NMI_CAUSE_FFF_Values, BaseType, 0U> ;
    using MnvecIsMtvecNmiIsFFF = CoreFieldValue<CSR_MMISC_CTL_NMI_CAUSE_FFF_Values, BaseType, 1U> ;

    using NmiCauseFffBit0 = CoreFieldValueMask<CSR_MMISC_CTL_NMI_CAUSE_FFF_Values, BaseType, 1U> ;
    using NmiCuaseFffMask = CoreFieldValueMask<CSR_MMISC_CTL_NMI_CAUSE_FFF_Values, BaseType, 1U> ;
} ;


template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MCOUNTINHIBIT_CY_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using McyclesOn = CoreFieldValue<CSR_MCOUNTINHIBIT_CY_Values, BaseType, 0U> ;
    using McyclesOff = CoreFieldValue<CSR_MCOUNTINHIBIT_CY_Values, BaseType, 1U> ;

    using McyclesBit0 = CoreFieldValueMask<CSR_MCOUNTINHIBIT_CY_Values, BaseType, 1U> ;
    using McyclesMask = CoreFieldValueMask<CSR_MCOUNTINHIBIT_CY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MCOUNTINHIBIT_IR_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using MinstretOn = CoreFieldValue<CSR_MCOUNTINHIBIT_IR_Values, BaseType, 0U> ;
    using MinstretOff = CoreFieldValue<CSR_MCOUNTINHIBIT_IR_Values, BaseType, 1U> ;

    using MinstretBit0 = CoreFieldValueMask<CSR_MCOUNTINHIBIT_IR_Values, BaseType, 1U> ;
    using MinstretMask = CoreFieldValueMask<CSR_MCOUNTINHIBIT_IR_Values, BaseType, 1U> ;
} ;


template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MSUBM_TYP_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using NoTrap = CoreFieldValue<CSR_MSUBM_TYP_Values, BaseType, 0U> ;
    using Interrupt = CoreFieldValue<CSR_MSUBM_TYP_Values, BaseType, 1U> ;
    using Exception = CoreFieldValue<CSR_MSUBM_TYP_Values, BaseType, 2U> ;
    using NMI = CoreFieldValue<CSR_MSUBM_TYP_Values, BaseType, 4U> ;

    using TypBit0 = CoreFieldValueMask<CSR_MSUBM_TYP_Values, BaseType, 1U> ;
    using TypBit1 = CoreFieldValueMask<CSR_MSUBM_TYP_Values, BaseType, 2U> ;
    using TypMask = CoreFieldValueMask<CSR_MSUBM_TYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSR_MSUBM_PTYP_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using NoTrap = CoreFieldValue<CSR_MSUBM_PTYP_Values, BaseType, 0U> ;
    using Interrupt = CoreFieldValue<CSR_MSUBM_PTYP_Values, BaseType, 1U> ;
    using Exception = CoreFieldValue<CSR_MSUBM_PTYP_Values, BaseType, 2U> ;
    using NMI = CoreFieldValue<CSR_MSUBM_PTYP_Values, BaseType, 4U> ;

    using PTypBit0 = CoreFieldValueMask<CSR_MSUBM_PTYP_Values, BaseType, 1U> ;
    using PTypBit1 = CoreFieldValueMask<CSR_MSUBM_PTYP_Values, BaseType, 2U> ;
    using PTypMask = CoreFieldValueMask<CSR_MSUBM_PTYP_Values, BaseType, 3U> ;
} ;