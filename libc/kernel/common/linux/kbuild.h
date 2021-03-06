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
#ifndef __LINUX_KBUILD_H
#define __LINUX_KBUILD_H
#define DEFINE(sym, val)   asm volatile("\n->" #sym " %0 " #val : : "i" (val))
#define BLANK() asm volatile("\n->" : : )
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OFFSET(sym, str, mem)   DEFINE(sym, offsetof(struct str, mem))
#define COMMENT(x)   asm volatile("\n->#" x)
#endif
