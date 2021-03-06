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
#ifndef _LINUX_EFI_H
#define _LINUX_EFI_H
#include <linux/init.h>
#include <linux/string.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/time.h>
#include <linux/types.h>
#include <linux/proc_fs.h>
#include <linux/rtc.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/ioport.h>
#include <linux/pfn.h>
#include <linux/pstore.h>
#include <asm/page.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_SUCCESS 0
#define EFI_LOAD_ERROR ( 1 | (1UL << (BITS_PER_LONG-1)))
#define EFI_INVALID_PARAMETER ( 2 | (1UL << (BITS_PER_LONG-1)))
#define EFI_UNSUPPORTED ( 3 | (1UL << (BITS_PER_LONG-1)))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_BAD_BUFFER_SIZE ( 4 | (1UL << (BITS_PER_LONG-1)))
#define EFI_BUFFER_TOO_SMALL ( 5 | (1UL << (BITS_PER_LONG-1)))
#define EFI_NOT_READY ( 6 | (1UL << (BITS_PER_LONG-1)))
#define EFI_DEVICE_ERROR ( 7 | (1UL << (BITS_PER_LONG-1)))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_WRITE_PROTECTED ( 8 | (1UL << (BITS_PER_LONG-1)))
#define EFI_OUT_OF_RESOURCES ( 9 | (1UL << (BITS_PER_LONG-1)))
#define EFI_NOT_FOUND (14 | (1UL << (BITS_PER_LONG-1)))
#define EFI_SECURITY_VIOLATION (26 | (1UL << (BITS_PER_LONG-1)))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef unsigned long efi_status_t;
typedef u8 efi_bool_t;
typedef u16 efi_char16_t;
typedef struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 b[16];
} efi_guid_t;
#define EFI_GUID(a,b,c,d0,d1,d2,d3,d4,d5,d6,d7)  ((efi_guid_t)  {{ (a) & 0xff, ((a) >> 8) & 0xff, ((a) >> 16) & 0xff, ((a) >> 24) & 0xff,   (b) & 0xff, ((b) >> 8) & 0xff,   (c) & 0xff, ((c) >> 8) & 0xff,   (d0), (d1), (d2), (d3), (d4), (d5), (d6), (d7) }})
typedef struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 signature;
 u32 revision;
 u32 headersize;
 u32 crc32;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 reserved;
} efi_table_hdr_t;
#define EFI_RESERVED_TYPE 0
#define EFI_LOADER_CODE 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_LOADER_DATA 2
#define EFI_BOOT_SERVICES_CODE 3
#define EFI_BOOT_SERVICES_DATA 4
#define EFI_RUNTIME_SERVICES_CODE 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_RUNTIME_SERVICES_DATA 6
#define EFI_CONVENTIONAL_MEMORY 7
#define EFI_UNUSABLE_MEMORY 8
#define EFI_ACPI_RECLAIM_MEMORY 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_ACPI_MEMORY_NVS 10
#define EFI_MEMORY_MAPPED_IO 11
#define EFI_MEMORY_MAPPED_IO_PORT_SPACE 12
#define EFI_PAL_CODE 13
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_MAX_MEMORY_TYPE 14
#define EFI_MEMORY_UC ((u64)0x0000000000000001ULL)
#define EFI_MEMORY_WC ((u64)0x0000000000000002ULL)
#define EFI_MEMORY_WT ((u64)0x0000000000000004ULL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_MEMORY_WB ((u64)0x0000000000000008ULL)
#define EFI_MEMORY_WP ((u64)0x0000000000001000ULL)
#define EFI_MEMORY_RP ((u64)0x0000000000002000ULL)
#define EFI_MEMORY_XP ((u64)0x0000000000004000ULL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_MEMORY_RUNTIME ((u64)0x8000000000000000ULL)
#define EFI_MEMORY_DESCRIPTOR_VERSION 1
#define EFI_PAGE_SHIFT 12
typedef struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 type;
 u32 pad;
 u64 phys_addr;
 u64 virt_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 num_pages;
 u64 attribute;
} efi_memory_desc_t;
typedef struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 efi_guid_t guid;
 u32 headersize;
 u32 flags;
 u32 imagesize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} efi_capsule_header_t;
#define EFI_ALLOCATE_ANY_PAGES 0
#define EFI_ALLOCATE_MAX_ADDRESS 1
#define EFI_ALLOCATE_ADDRESS 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_MAX_ALLOCATE_TYPE 3
typedef int (*efi_freemem_callback_t) (u64 start, u64 end, void *arg);
#define EFI_TIME_ADJUST_DAYLIGHT 0x1
#define EFI_TIME_IN_DAYLIGHT 0x2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_UNSPECIFIED_TIMEZONE 0x07ff
typedef struct {
 u16 year;
 u8 month;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 day;
 u8 hour;
 u8 minute;
 u8 second;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 pad1;
 u32 nanosecond;
 s16 timezone;
 u8 daylight;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 pad2;
} efi_time_t;
typedef struct {
 u32 resolution;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 accuracy;
 u8 sets_to_zero;
} efi_time_cap_t;
typedef struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 efi_table_hdr_t hdr;
 void *raise_tpl;
 void *restore_tpl;
 void *allocate_pages;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *free_pages;
 void *get_memory_map;
 void *allocate_pool;
 void *free_pool;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *create_event;
 void *set_timer;
 void *wait_for_event;
 void *signal_event;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *close_event;
 void *check_event;
 void *install_protocol_interface;
 void *reinstall_protocol_interface;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *uninstall_protocol_interface;
 void *handle_protocol;
 void *__reserved;
 void *register_protocol_notify;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *locate_handle;
 void *locate_device_path;
 void *install_configuration_table;
 void *load_image;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *start_image;
 void *exit;
 void *unload_image;
 void *exit_boot_services;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *get_next_monotonic_count;
 void *stall;
 void *set_watchdog_timer;
 void *connect_controller;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *disconnect_controller;
 void *open_protocol;
 void *close_protocol;
 void *open_protocol_information;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *protocols_per_handle;
 void *locate_handle_buffer;
 void *locate_protocol;
 void *install_multiple_protocol_interfaces;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *uninstall_multiple_protocol_interfaces;
 void *calculate_crc32;
 void *copy_mem;
 void *set_mem;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *create_event_ex;
} efi_boot_services_t;
typedef enum {
 EfiPciIoWidthUint8,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 EfiPciIoWidthUint16,
 EfiPciIoWidthUint32,
 EfiPciIoWidthUint64,
 EfiPciIoWidthFifoUint8,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 EfiPciIoWidthFifoUint16,
 EfiPciIoWidthFifoUint32,
 EfiPciIoWidthFifoUint64,
 EfiPciIoWidthFillUint8,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 EfiPciIoWidthFillUint16,
 EfiPciIoWidthFillUint32,
 EfiPciIoWidthFillUint64,
 EfiPciIoWidthMaximum
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} EFI_PCI_IO_PROTOCOL_WIDTH;
typedef enum {
 EfiPciIoAttributeOperationGet,
 EfiPciIoAttributeOperationSet,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 EfiPciIoAttributeOperationEnable,
 EfiPciIoAttributeOperationDisable,
 EfiPciIoAttributeOperationSupported,
 EfiPciIoAttributeOperationMaximum
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} EFI_PCI_IO_PROTOCOL_ATTRIBUTE_OPERATION;
typedef struct {
 void *read;
 void *write;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} efi_pci_io_protocol_access_t;
typedef struct {
 void *poll_mem;
 void *poll_io;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 efi_pci_io_protocol_access_t mem;
 efi_pci_io_protocol_access_t io;
 efi_pci_io_protocol_access_t pci;
 void *copy_mem;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *map;
 void *unmap;
 void *allocate_buffer;
 void *free_buffer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *flush;
 void *get_location;
 void *attributes;
 void *get_bar_attributes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *set_bar_attributes;
 uint64_t romsize;
 void *romimage;
} efi_pci_io_protocol;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_PCI_IO_ATTRIBUTE_ISA_MOTHERBOARD_IO 0x0001
#define EFI_PCI_IO_ATTRIBUTE_ISA_IO 0x0002
#define EFI_PCI_IO_ATTRIBUTE_VGA_PALETTE_IO 0x0004
#define EFI_PCI_IO_ATTRIBUTE_VGA_MEMORY 0x0008
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_PCI_IO_ATTRIBUTE_VGA_IO 0x0010
#define EFI_PCI_IO_ATTRIBUTE_IDE_PRIMARY_IO 0x0020
#define EFI_PCI_IO_ATTRIBUTE_IDE_SECONDARY_IO 0x0040
#define EFI_PCI_IO_ATTRIBUTE_MEMORY_WRITE_COMBINE 0x0080
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_PCI_IO_ATTRIBUTE_IO 0x0100
#define EFI_PCI_IO_ATTRIBUTE_MEMORY 0x0200
#define EFI_PCI_IO_ATTRIBUTE_BUS_MASTER 0x0400
#define EFI_PCI_IO_ATTRIBUTE_MEMORY_CACHED 0x0800
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_PCI_IO_ATTRIBUTE_MEMORY_DISABLE 0x1000
#define EFI_PCI_IO_ATTRIBUTE_EMBEDDED_DEVICE 0x2000
#define EFI_PCI_IO_ATTRIBUTE_EMBEDDED_ROM 0x4000
#define EFI_PCI_IO_ATTRIBUTE_DUAL_ADDRESS_CYCLE 0x8000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_PCI_IO_ATTRIBUTE_ISA_IO_16 0x10000
#define EFI_PCI_IO_ATTRIBUTE_VGA_PALETTE_IO_16 0x20000
#define EFI_PCI_IO_ATTRIBUTE_VGA_IO_16 0x40000
#define EFI_RESET_COLD 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_RESET_WARM 1
#define EFI_RESET_SHUTDOWN 2
#define EFI_RUNTIME_SERVICES_SIGNATURE ((u64)0x5652453544e5552ULL)
#define EFI_RUNTIME_SERVICES_REVISION 0x00010000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct {
 efi_table_hdr_t hdr;
 unsigned long get_time;
 unsigned long set_time;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long get_wakeup_time;
 unsigned long set_wakeup_time;
 unsigned long set_virtual_address_map;
 unsigned long convert_pointer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long get_variable;
 unsigned long get_next_variable;
 unsigned long set_variable;
 unsigned long get_next_high_mono_count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long reset_system;
 unsigned long update_capsule;
 unsigned long query_capsule_caps;
 unsigned long query_variable_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} efi_runtime_services_t;
typedef efi_status_t efi_get_time_t (efi_time_t *tm, efi_time_cap_t *tc);
typedef efi_status_t efi_set_time_t (efi_time_t *tm);
typedef efi_status_t efi_get_wakeup_time_t (efi_bool_t *enabled, efi_bool_t *pending,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 efi_time_t *tm);
typedef efi_status_t efi_set_wakeup_time_t (efi_bool_t enabled, efi_time_t *tm);
typedef efi_status_t efi_get_variable_t (efi_char16_t *name, efi_guid_t *vendor, u32 *attr,
 unsigned long *data_size, void *data);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef efi_status_t efi_get_next_variable_t (unsigned long *name_size, efi_char16_t *name,
 efi_guid_t *vendor);
typedef efi_status_t efi_set_variable_t (efi_char16_t *name, efi_guid_t *vendor,
 u32 attr, unsigned long data_size,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *data);
typedef efi_status_t efi_get_next_high_mono_count_t (u32 *count);
typedef void efi_reset_system_t (int reset_type, efi_status_t status,
 unsigned long data_size, efi_char16_t *data);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef efi_status_t efi_set_virtual_address_map_t (unsigned long memory_map_size,
 unsigned long descriptor_size,
 u32 descriptor_version,
 efi_memory_desc_t *virtual_map);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef efi_status_t efi_query_variable_info_t(u32 attr,
 u64 *storage_space,
 u64 *remaining_space,
 u64 *max_variable_size);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef efi_status_t efi_update_capsule_t(efi_capsule_header_t **capsules,
 unsigned long count,
 unsigned long sg_list);
typedef efi_status_t efi_query_capsule_caps_t(efi_capsule_header_t **capsules,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long count,
 u64 *max_size,
 int *reset_type);
typedef efi_status_t efi_query_variable_store_t(u32 attributes, unsigned long size);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NULL_GUID   EFI_GUID( 0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 )
#define MPS_TABLE_GUID   EFI_GUID( 0xeb9d2d2f, 0x2d88, 0x11d3, 0x9a, 0x16, 0x0, 0x90, 0x27, 0x3f, 0xc1, 0x4d )
#define ACPI_TABLE_GUID   EFI_GUID( 0xeb9d2d30, 0x2d88, 0x11d3, 0x9a, 0x16, 0x0, 0x90, 0x27, 0x3f, 0xc1, 0x4d )
#define ACPI_20_TABLE_GUID   EFI_GUID( 0x8868e871, 0xe4f1, 0x11d3, 0xbc, 0x22, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81 )
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SMBIOS_TABLE_GUID   EFI_GUID( 0xeb9d2d31, 0x2d88, 0x11d3, 0x9a, 0x16, 0x0, 0x90, 0x27, 0x3f, 0xc1, 0x4d )
#define SAL_SYSTEM_TABLE_GUID   EFI_GUID( 0xeb9d2d32, 0x2d88, 0x11d3, 0x9a, 0x16, 0x0, 0x90, 0x27, 0x3f, 0xc1, 0x4d )
#define HCDP_TABLE_GUID   EFI_GUID( 0xf951938d, 0x620b, 0x42ef, 0x82, 0x79, 0xa8, 0x4b, 0x79, 0x61, 0x78, 0x98 )
#define UGA_IO_PROTOCOL_GUID   EFI_GUID( 0x61a4d49e, 0x6f68, 0x4f1b, 0xb9, 0x22, 0xa8, 0x6e, 0xed, 0xb, 0x7, 0xa2 )
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_GLOBAL_VARIABLE_GUID   EFI_GUID( 0x8be4df61, 0x93ca, 0x11d2, 0xaa, 0x0d, 0x00, 0xe0, 0x98, 0x03, 0x2b, 0x8c )
#define UV_SYSTEM_TABLE_GUID   EFI_GUID( 0x3b13a7d4, 0x633e, 0x11dd, 0x93, 0xec, 0xda, 0x25, 0x56, 0xd8, 0x95, 0x93 )
#define LINUX_EFI_CRASH_GUID   EFI_GUID( 0xcfc8fc79, 0xbe2e, 0x4ddc, 0x97, 0xf0, 0x9f, 0x98, 0xbf, 0xe2, 0x98, 0xa0 )
#define LOADED_IMAGE_PROTOCOL_GUID   EFI_GUID( 0x5b1b31a1, 0x9562, 0x11d2, 0x8e, 0x3f, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b )
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_GRAPHICS_OUTPUT_PROTOCOL_GUID   EFI_GUID( 0x9042a9de, 0x23dc, 0x4a38, 0x96, 0xfb, 0x7a, 0xde, 0xd0, 0x80, 0x51, 0x6a )
#define EFI_UGA_PROTOCOL_GUID   EFI_GUID( 0x982c298b, 0xf4fa, 0x41cb, 0xb8, 0x38, 0x77, 0xaa, 0x68, 0x8f, 0xb8, 0x39 )
#define EFI_PCI_IO_PROTOCOL_GUID   EFI_GUID( 0x4cf5b200, 0x68b8, 0x4ca5, 0x9e, 0xec, 0xb2, 0x3e, 0x3f, 0x50, 0x2, 0x9a )
#define EFI_FILE_INFO_ID   EFI_GUID( 0x9576e92, 0x6d3f, 0x11d2, 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b )
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_FILE_SYSTEM_GUID   EFI_GUID( 0x964e5b22, 0x6459, 0x11d2, 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b )
typedef struct {
 efi_guid_t guid;
 u64 table;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} efi_config_table_64_t;
typedef struct {
 efi_guid_t guid;
 u32 table;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} efi_config_table_32_t;
typedef struct {
 efi_guid_t guid;
 unsigned long table;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} efi_config_table_t;
#define EFI_SYSTEM_TABLE_SIGNATURE ((u64)0x5453595320494249ULL)
#define EFI_2_30_SYSTEM_TABLE_REVISION ((2 << 16) | (30))
#define EFI_2_20_SYSTEM_TABLE_REVISION ((2 << 16) | (20))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_2_10_SYSTEM_TABLE_REVISION ((2 << 16) | (10))
#define EFI_2_00_SYSTEM_TABLE_REVISION ((2 << 16) | (00))
#define EFI_1_10_SYSTEM_TABLE_REVISION ((1 << 16) | (10))
#define EFI_1_02_SYSTEM_TABLE_REVISION ((1 << 16) | (02))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct {
 efi_table_hdr_t hdr;
 u64 fw_vendor;
 u32 fw_revision;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 __pad1;
 u64 con_in_handle;
 u64 con_in;
 u64 con_out_handle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 con_out;
 u64 stderr_handle;
 u64 stderr;
 u64 runtime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 boottime;
 u32 nr_tables;
 u32 __pad2;
 u64 tables;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} efi_system_table_64_t;
typedef struct {
 efi_table_hdr_t hdr;
 u32 fw_vendor;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 fw_revision;
 u32 con_in_handle;
 u32 con_in;
 u32 con_out_handle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 con_out;
 u32 stderr_handle;
 u32 stderr;
 u32 runtime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 boottime;
 u32 nr_tables;
 u32 tables;
} efi_system_table_32_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct {
 efi_table_hdr_t hdr;
 unsigned long fw_vendor;
 u32 fw_revision;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long con_in_handle;
 unsigned long con_in;
 unsigned long con_out_handle;
 unsigned long con_out;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long stderr_handle;
 unsigned long stderr;
 efi_runtime_services_t *runtime;
 efi_boot_services_t *boottime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long nr_tables;
 unsigned long tables;
} efi_system_table_t;
struct efi_memory_map {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *phys_map;
 void *map;
 void *map_end;
 int nr_map;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long desc_version;
 unsigned long desc_size;
};
typedef struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 revision;
 void *parent_handle;
 efi_system_table_t *system_table;
 void *device_handle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *file_path;
 void *reserved;
 u32 load_options_size;
 void *load_options;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *image_base;
 __aligned_u64 image_size;
 unsigned int image_code_type;
 unsigned int image_data_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long unload;
} efi_loaded_image_t;
typedef struct {
 u64 revision;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *open_volume;
} efi_file_io_interface_t;
typedef struct {
 u64 size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 file_size;
 u64 phys_size;
 efi_time_t create_time;
 efi_time_t last_access_time;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 efi_time_t modification_time;
 __aligned_u64 attribute;
 efi_char16_t filename[1];
} efi_file_info_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct {
 u64 revision;
 void *open;
 void *close;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *delete;
 void *read;
 void *write;
 void *get_position;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *set_position;
 void *get_info;
 void *set_info;
 void *flush;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} efi_file_handle_t;
#define EFI_FILE_MODE_READ 0x0000000000000001
#define EFI_FILE_MODE_WRITE 0x0000000000000002
#define EFI_FILE_MODE_CREATE 0x8000000000000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_INVALID_TABLE_ADDR (~0UL)
#define EFI_BOOT 0
#define EFI_SYSTEM_TABLES 1
#define EFI_CONFIG_TABLES 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_RUNTIME_SERVICES 3
#define EFI_MEMMAP 4
#define EFI_64BIT 5
#define EFI_VARIABLE_NON_VOLATILE 0x0000000000000001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_VARIABLE_BOOTSERVICE_ACCESS 0x0000000000000002
#define EFI_VARIABLE_RUNTIME_ACCESS 0x0000000000000004
#define EFI_VARIABLE_HARDWARE_ERROR_RECORD 0x0000000000000008
#define EFI_VARIABLE_AUTHENTICATED_WRITE_ACCESS 0x0000000000000010
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_VARIABLE_TIME_BASED_AUTHENTICATED_WRITE_ACCESS 0x0000000000000020
#define EFI_VARIABLE_APPEND_WRITE 0x0000000000000040
#define EFI_VARIABLE_MASK (EFI_VARIABLE_NON_VOLATILE |   EFI_VARIABLE_BOOTSERVICE_ACCESS |   EFI_VARIABLE_RUNTIME_ACCESS |   EFI_VARIABLE_HARDWARE_ERROR_RECORD |   EFI_VARIABLE_AUTHENTICATED_WRITE_ACCESS |   EFI_VARIABLE_TIME_BASED_AUTHENTICATED_WRITE_ACCESS |   EFI_VARIABLE_APPEND_WRITE)
#define EFI_VARIABLE_GUID_LEN 36
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_LOCATE_ALL_HANDLES 0
#define EFI_LOCATE_BY_REGISTER_NOTIFY 1
#define EFI_LOCATE_BY_PROTOCOL 2
#define EFI_DEV_HW 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_DEV_PCI 1
#define EFI_DEV_PCCARD 2
#define EFI_DEV_MEM_MAPPED 3
#define EFI_DEV_VENDOR 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_DEV_CONTROLLER 5
#define EFI_DEV_ACPI 0x02
#define EFI_DEV_BASIC_ACPI 1
#define EFI_DEV_EXPANDED_ACPI 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_DEV_MSG 0x03
#define EFI_DEV_MSG_ATAPI 1
#define EFI_DEV_MSG_SCSI 2
#define EFI_DEV_MSG_FC 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_DEV_MSG_1394 4
#define EFI_DEV_MSG_USB 5
#define EFI_DEV_MSG_USB_CLASS 15
#define EFI_DEV_MSG_I20 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_DEV_MSG_MAC 11
#define EFI_DEV_MSG_IPV4 12
#define EFI_DEV_MSG_IPV6 13
#define EFI_DEV_MSG_INFINIBAND 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_DEV_MSG_UART 14
#define EFI_DEV_MSG_VENDOR 10
#define EFI_DEV_MEDIA 0x04
#define EFI_DEV_MEDIA_HARD_DRIVE 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_DEV_MEDIA_CDROM 2
#define EFI_DEV_MEDIA_VENDOR 3
#define EFI_DEV_MEDIA_FILE 4
#define EFI_DEV_MEDIA_PROTOCOL 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_DEV_BIOS_BOOT 0x05
#define EFI_DEV_END_PATH 0x7F
#define EFI_DEV_END_PATH2 0xFF
#define EFI_DEV_END_INSTANCE 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EFI_DEV_END_ENTIRE 0xFF
struct efi_generic_dev_path {
 u8 type;
 u8 sub_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 length;
} __attribute ((packed));
struct efivar_operations {
 efi_get_variable_t *get_variable;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 efi_get_next_variable_t *get_next_variable;
 efi_set_variable_t *set_variable;
 efi_query_variable_store_t *query_variable_store;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct efivars {
 spinlock_t lock;
 struct kset *kset;
 struct kobject *kobject;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct efivar_operations *ops;
};
struct efi_variable {
 efi_char16_t VariableName[1024/sizeof(efi_char16_t)];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 efi_guid_t VendorGuid;
 unsigned long DataSize;
 __u8 Data[1024];
 efi_status_t Status;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 Attributes;
} __attribute__((packed));
#endif
