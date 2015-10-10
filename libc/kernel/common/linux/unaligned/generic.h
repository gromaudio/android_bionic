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
#ifndef _LINUX_UNALIGNED_GENERIC_H
#define _LINUX_UNALIGNED_GENERIC_H
#define __get_unaligned_le(ptr) ((__force typeof(*(ptr)))({   __builtin_choose_expr(sizeof(*(ptr)) == 1, *(ptr),   __builtin_choose_expr(sizeof(*(ptr)) == 2, get_unaligned_le16((ptr)),   __builtin_choose_expr(sizeof(*(ptr)) == 4, get_unaligned_le32((ptr)),   __builtin_choose_expr(sizeof(*(ptr)) == 8, get_unaligned_le64((ptr)),   __bad_unaligned_access_size()))));   }))
#define __get_unaligned_be(ptr) ((__force typeof(*(ptr)))({   __builtin_choose_expr(sizeof(*(ptr)) == 1, *(ptr),   __builtin_choose_expr(sizeof(*(ptr)) == 2, get_unaligned_be16((ptr)),   __builtin_choose_expr(sizeof(*(ptr)) == 4, get_unaligned_be32((ptr)),   __builtin_choose_expr(sizeof(*(ptr)) == 8, get_unaligned_be64((ptr)),   __bad_unaligned_access_size()))));   }))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __put_unaligned_le(val, ptr) ({   void *__gu_p = (ptr);   switch (sizeof(*(ptr))) {   case 1:   *(u8 *)__gu_p = (__force u8)(val);   break;   case 2:   put_unaligned_le16((__force u16)(val), __gu_p);   break;   case 4:   put_unaligned_le32((__force u32)(val), __gu_p);   break;   case 8:   put_unaligned_le64((__force u64)(val), __gu_p);   break;   default:   __bad_unaligned_access_size();   break;   }   (void)0; })
#define __put_unaligned_be(val, ptr) ({   void *__gu_p = (ptr);   switch (sizeof(*(ptr))) {   case 1:   *(u8 *)__gu_p = (__force u8)(val);   break;   case 2:   put_unaligned_be16((__force u16)(val), __gu_p);   break;   case 4:   put_unaligned_be32((__force u32)(val), __gu_p);   break;   case 8:   put_unaligned_be64((__force u64)(val), __gu_p);   break;   default:   __bad_unaligned_access_size();   break;   }   (void)0; })
#endif
