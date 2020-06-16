// Filename: machinetimerfieldvalues.hpp
// Created by by Sergey Kolody  on 15.06.2020.

#if !defined(MACHINETIMERENUMS_HPP)
#define MACHINETIMERENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct MACHINETIMER_MTIME_MTIME_Values: public RegisterField<Reg, offset, size, AccessMode>
{

};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct MACHINETIMER_MTIMECMP_MTIMECMP_Values: public RegisterField<Reg, offset, size, AccessMode>
{

};

#endif // MACHINETIMERENUMS_HPP



