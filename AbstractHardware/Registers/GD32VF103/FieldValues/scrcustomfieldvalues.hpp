// Filename: scrcustomfieldvalues.hpp
// Created by by Sergey Kolody  on 14.07.2020.
//
// Copyright (c) 2020 Metran All rights reserved.
#pragma once

#include "corefieldvalue.hpp"     //for FieldValues

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSRCUSTOM_MCAUSE_MPIL_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{

} ;
template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSRCUSTOM_MCAUSE_MPIE_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using InterruptDisabled = FieldValue<CSRCUSTOM_MCAUSE_MPIE_Values, BaseType, 0U> ;
    using InterruptEnabled = FieldValue<CSRCUSTOM_MCAUSE_MPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSRCUSTOM_MCAUSE_MPP_Valuess: public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using MachineMode = FieldValue<CSRCUSTOM_MCAUSE_MPP_Values, BaseType, 0U> ;
    using UserMode = FieldValue<CSRCUSTOM_MCAUSE_MPP_Values, BaseType, 3U> ;
} ;


template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct CSRCUSTOM_MCAUSE_MINHV_Values: public CoreRegisterField<Reg, offset, size, AccessMode>
{
    using TakeInterruptIfVectoredModeComplete = FieldValue<CSRCUSTOM_MCAUSE_MINHV_Values, BaseType, 0U> ;
    using TakeInterruptIfVectoredMode = FieldValue<CSRCUSTOM_MCAUSE_MINHV_Values, BaseType, 1U> ;
} ;


