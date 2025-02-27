/**
    Copyright Notice:
    Copyright 2021 DMTF. All rights reserved.
    License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/libspdm/blob/main/LICENSE.md
**/

#ifndef __PROCESSOR_BIND_H__
#define __PROCESSOR_BIND_H__

///
/// Define the processor type so other code can make processor based choices
///
#define MDE_CPU_ARC

//
// Make sure we are using the correct packing rules per EFI specification
//
#if !defined(__GNUC__)
#pragma pack()
#endif

///
/// 8-byte unsigned value
///
typedef unsigned long long uint64 __attribute__((aligned(8)));
///
/// 8-byte signed value
///
typedef long long int64 __attribute__((aligned(8)));
///
/// 4-byte unsigned value
///
typedef unsigned int uint32 __attribute__((aligned(4)));
///
/// 4-byte signed value
///
typedef int int32 __attribute__((aligned(4)));
///
/// 2-byte unsigned value
///
typedef unsigned short uint16 __attribute__((aligned(2)));
///
/// 2-byte signed value
///
typedef short int16 __attribute__((aligned(2)));
///
/// Logical Boolean.  1-byte value containing 0 for FALSE or a 1 for TRUE.  Other
/// values are undefined.
///
typedef unsigned char boolean;
///
/// 1-byte unsigned value
///
typedef unsigned char uint8;
///
/// 1-byte Character
///
typedef char char8;
///
/// 1-byte signed value
///
typedef signed char int8;
///
/// Unsigned value of native width.  (4 bytes on supported 32-bit processor instructions,
/// 8 bytes on supported 64-bit processor instructions)
///
typedef uint32 uintn __attribute__((aligned(4)));
///
/// Signed value of native width.  (4 bytes on supported 32-bit processor instructions,
/// 8 bytes on supported 64-bit processor instructions)
///
typedef int32 intn __attribute__((aligned(4)));

//
// Processor specific defines
//

///
/// A value of native width with the highest bit set.
///
#define MAX_BIT 0x80000000

///
/// Maximum legal arc address
///
#define MAX_ADDRESS 0xFFFFFFFF

///
/// Maximum legal arc intn values.
///
#define MAX_INTN ((intn)0x7FFFFFFF)

#endif
