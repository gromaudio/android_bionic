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
#ifndef _ASM_GENERIC_DIV64_H
#define _ASM_GENERIC_DIV64_H
#include <linux/types.h>
#include <linux/compiler.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if BITS_PER_LONG == 64
#define do_div(n,base) ({   uint32_t __base = (base);   uint32_t __rem;   __rem = ((uint64_t)(n)) % __base;   (n) = ((uint64_t)(n)) / __base;   __rem;   })
#elif BITS_PER_LONG == 32
#define do_div(n,base) ({   uint32_t __base = (base);   uint32_t __rem;   (void)(((typeof((n)) *)0) == ((uint64_t *)0));   if (likely(((n) >> 32) == 0)) {   __rem = (uint32_t)(n) % __base;   (n) = (uint32_t)(n) / __base;   } else   __rem = __div64_32(&(n), __base);   __rem;   })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#error do_div() does not yet support the C64
#endif
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
