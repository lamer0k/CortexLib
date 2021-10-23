// Filename: machinetimerfieldvalues.hpp
// Created by by Sergey Kolody  on 15.06.2020.

#pragma once

#include "fieldvalue.hpp"     //for FieldValues

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct MACHINETIMER_MTIME_MTIME_Values: public RegisterField<Reg, offset, size, AccessMode>
{
    template<typename Reg::Type val,
        class  = typename std::enable_if_t<(size >= sizeof(Reg::Type) * 8U) || (val < (1U << size))>>
    using Value = FieldValue<MACHINETIMER_MTIME_MTIME_Values, BaseType, val>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct MACHINETIMER_MTIMECMP_MTIMECMP_Values: public RegisterField<Reg, offset, size, AccessMode>
{
    template<typename Reg::Type val,
        class  = typename std::enable_if_t<(size >= sizeof(Reg::Type) * 8U) || (val < (1U << size))>>
    using Value = FieldValue<MACHINETIMER_MTIMECMP_MTIMECMP_Values, BaseType, val>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct MACHINETIMER_MSIP_MSIP_Values: public RegisterField<Reg, offset, size, AccessMode>
{
    using GenerateSwInterrupt = FieldValue<MACHINETIMER_MSIP_MSIP_Values, BaseType, 1U>;
    using ClearSwInterrupt = FieldValue<MACHINETIMER_MSIP_MSIP_Values, BaseType, 0U>;
};
