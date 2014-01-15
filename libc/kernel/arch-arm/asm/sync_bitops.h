/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __ASM_SYNC_BITOPS_H__
#define __ASM_SYNC_BITOPS_H__
#include <asm/bitops.h>
#include <asm/system.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define sync_set_bit(nr, p) _set_bit(nr, p)
#define sync_clear_bit(nr, p) _clear_bit(nr, p)
#define sync_change_bit(nr, p) _change_bit(nr, p)
#define sync_test_and_set_bit(nr, p) _test_and_set_bit(nr, p)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define sync_test_and_clear_bit(nr, p) _test_and_clear_bit(nr, p)
#define sync_test_and_change_bit(nr, p) _test_and_change_bit(nr, p)
#define sync_test_bit(nr, addr) test_bit(nr, addr)
#define sync_cmpxchg cmpxchg
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
