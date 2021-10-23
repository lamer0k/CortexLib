/*******************************************************************************
* Filename      : machinetimerregisters.hpp
*
* Details       : Analog to digital converter. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#pragma once

#include "machinetimerfieldvalues.hpp"  //for Bits Fields defs
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode

struct MACHINETIMER
{
    struct MACHINETIMERBase
    {
    };

    struct MTIME : public RegisterBase<0xd1000000, 64, ReadWriteMode>
    {
        using MTIMEField = MACHINETIMER_MTIME_MTIME_Values<MACHINETIMER::MTIME, 0, 64, ReadWriteMode, MACHINETIMERBase> ;
        using FieldValues = MACHINETIMER_MTIME_MTIME_Values<MACHINETIMER::MTIME, 0, 0, NoAccess, NoAccess> ;
    };

    struct MTIMECMP : public RegisterBase<0xd1000008, 64, ReadWriteMode>
    {
        using MTIMECMPField = MACHINETIMER_MTIMECMP_MTIMECMP_Values<MACHINETIMER::MTIMECMP, 0, 64, ReadWriteMode, MACHINETIMERBase> ;
        using FieldValues = MACHINETIMER_MTIMECMP_MTIMECMP_Values<MACHINETIMER::MTIMECMP, 0, 0, NoAccess, NoAccess> ;
    };

    struct MSIP : public RegisterBase<0xd1000ffc, 64, ReadWriteMode>
    {
        using SIP = MACHINETIMER_MSIP_MSIP_Values<MACHINETIMER::MTIMECMP, 0, 1, ReadWriteMode, MACHINETIMERBase> ;
        using FieldValues = MACHINETIMER_MSIP_MSIP_Values<MACHINETIMER::MTIMECMP, 0, 0, NoAccess, NoAccess> ;
    };

} ;



