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
#ifndef LINUX_MOD_DEVICETABLE_H
#define LINUX_MOD_DEVICETABLE_H
#include <linux/types.h>
#include <linux/uuid.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef unsigned long kernel_ulong_t;
#define PCI_ANY_ID (~0)
struct pci_device_id {
 __u32 vendor, device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 subvendor, subdevice;
 kernel_ulong_t driver_data;
};
#define IEEE1394_MATCH_VENDOR_ID 0x0001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IEEE1394_MATCH_MODEL_ID 0x0002
#define IEEE1394_MATCH_SPECIFIER_ID 0x0004
#define IEEE1394_MATCH_VERSION 0x0008
struct ieee1394_device_id {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 match_flags;
 __u32 vendor_id;
 __u32 model_id;
 __u32 specifier_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 version;
 kernel_ulong_t driver_data;
};
struct usb_device_id {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 match_flags;
 __u16 idVendor;
 __u16 idProduct;
 __u16 bcdDevice_lo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 bcdDevice_hi;
 __u8 bDeviceClass;
 __u8 bDeviceSubClass;
 __u8 bDeviceProtocol;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bInterfaceClass;
 __u8 bInterfaceSubClass;
 __u8 bInterfaceProtocol;
 __u8 bInterfaceNumber;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kernel_ulong_t driver_info
 __attribute__((aligned(sizeof(kernel_ulong_t))));
};
#define USB_DEVICE_ID_MATCH_VENDOR 0x0001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DEVICE_ID_MATCH_PRODUCT 0x0002
#define USB_DEVICE_ID_MATCH_DEV_LO 0x0004
#define USB_DEVICE_ID_MATCH_DEV_HI 0x0008
#define USB_DEVICE_ID_MATCH_DEV_CLASS 0x0010
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DEVICE_ID_MATCH_DEV_SUBCLASS 0x0020
#define USB_DEVICE_ID_MATCH_DEV_PROTOCOL 0x0040
#define USB_DEVICE_ID_MATCH_INT_CLASS 0x0080
#define USB_DEVICE_ID_MATCH_INT_SUBCLASS 0x0100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DEVICE_ID_MATCH_INT_PROTOCOL 0x0200
#define USB_DEVICE_ID_MATCH_INT_NUMBER 0x0400
#define HID_ANY_ID (~0)
#define HID_BUS_ANY 0xffff
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HID_GROUP_ANY 0x0000
struct hid_device_id {
 __u16 bus;
 __u16 group;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 vendor;
 __u32 product;
 kernel_ulong_t driver_data;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ccw_device_id {
 __u16 match_flags;
 __u16 cu_type;
 __u16 dev_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 cu_model;
 __u8 dev_model;
 kernel_ulong_t driver_info;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CCW_DEVICE_ID_MATCH_CU_TYPE 0x01
#define CCW_DEVICE_ID_MATCH_CU_MODEL 0x02
#define CCW_DEVICE_ID_MATCH_DEVICE_TYPE 0x04
#define CCW_DEVICE_ID_MATCH_DEVICE_MODEL 0x08
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ap_device_id {
 __u16 match_flags;
 __u8 dev_type;
 kernel_ulong_t driver_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define AP_DEVICE_ID_MATCH_DEVICE_TYPE 0x01
struct css_device_id {
 __u8 match_flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 type;
 kernel_ulong_t driver_data;
};
#define ACPI_ID_LEN 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct acpi_device_id {
 __u8 id[ACPI_ID_LEN];
 kernel_ulong_t driver_data;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PNP_ID_LEN 8
#define PNP_MAX_DEVICES 8
struct pnp_device_id {
 __u8 id[PNP_ID_LEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kernel_ulong_t driver_data;
};
struct pnp_card_device_id {
 __u8 id[PNP_ID_LEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kernel_ulong_t driver_data;
 struct {
 __u8 id[PNP_ID_LEN];
 } devs[PNP_MAX_DEVICES];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define SERIO_ANY 0xff
struct serio_device_id {
 __u8 type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 extra;
 __u8 id;
 __u8 proto;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct of_device_id
{
 char name[32];
 char type[32];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char compatible[128];
 const void *data;
};
struct vio_device_id {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char type[32];
 char compat[32];
};
struct pcmcia_device_id {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 match_flags;
 __u16 manf_id;
 __u16 card_id;
 __u8 func_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 function;
 __u8 device_no;
 __u32 prod_id_hash[4];
 const char * prod_id[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kernel_ulong_t driver_info;
 char * cisfile;
};
#define PCMCIA_DEV_ID_MATCH_MANF_ID 0x0001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PCMCIA_DEV_ID_MATCH_CARD_ID 0x0002
#define PCMCIA_DEV_ID_MATCH_FUNC_ID 0x0004
#define PCMCIA_DEV_ID_MATCH_FUNCTION 0x0008
#define PCMCIA_DEV_ID_MATCH_PROD_ID1 0x0010
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PCMCIA_DEV_ID_MATCH_PROD_ID2 0x0020
#define PCMCIA_DEV_ID_MATCH_PROD_ID3 0x0040
#define PCMCIA_DEV_ID_MATCH_PROD_ID4 0x0080
#define PCMCIA_DEV_ID_MATCH_DEVICE_NO 0x0100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PCMCIA_DEV_ID_MATCH_FAKE_CIS 0x0200
#define PCMCIA_DEV_ID_MATCH_ANONYMOUS 0x0400
#define INPUT_DEVICE_ID_EV_MAX 0x1f
#define INPUT_DEVICE_ID_KEY_MIN_INTERESTING 0x71
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INPUT_DEVICE_ID_KEY_MAX 0x2ff
#define INPUT_DEVICE_ID_REL_MAX 0x0f
#define INPUT_DEVICE_ID_ABS_MAX 0x3f
#define INPUT_DEVICE_ID_MSC_MAX 0x07
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INPUT_DEVICE_ID_LED_MAX 0x0f
#define INPUT_DEVICE_ID_SND_MAX 0x07
#define INPUT_DEVICE_ID_FF_MAX 0x7f
#define INPUT_DEVICE_ID_SW_MAX 0x0f
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INPUT_DEVICE_ID_MATCH_BUS 1
#define INPUT_DEVICE_ID_MATCH_VENDOR 2
#define INPUT_DEVICE_ID_MATCH_PRODUCT 4
#define INPUT_DEVICE_ID_MATCH_VERSION 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INPUT_DEVICE_ID_MATCH_EVBIT 0x0010
#define INPUT_DEVICE_ID_MATCH_KEYBIT 0x0020
#define INPUT_DEVICE_ID_MATCH_RELBIT 0x0040
#define INPUT_DEVICE_ID_MATCH_ABSBIT 0x0080
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INPUT_DEVICE_ID_MATCH_MSCIT 0x0100
#define INPUT_DEVICE_ID_MATCH_LEDBIT 0x0200
#define INPUT_DEVICE_ID_MATCH_SNDBIT 0x0400
#define INPUT_DEVICE_ID_MATCH_FFBIT 0x0800
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INPUT_DEVICE_ID_MATCH_SWBIT 0x1000
struct input_device_id {
 kernel_ulong_t flags;
 __u16 bustype;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 vendor;
 __u16 product;
 __u16 version;
 kernel_ulong_t evbit[INPUT_DEVICE_ID_EV_MAX / BITS_PER_LONG + 1];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kernel_ulong_t keybit[INPUT_DEVICE_ID_KEY_MAX / BITS_PER_LONG + 1];
 kernel_ulong_t relbit[INPUT_DEVICE_ID_REL_MAX / BITS_PER_LONG + 1];
 kernel_ulong_t absbit[INPUT_DEVICE_ID_ABS_MAX / BITS_PER_LONG + 1];
 kernel_ulong_t mscbit[INPUT_DEVICE_ID_MSC_MAX / BITS_PER_LONG + 1];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kernel_ulong_t ledbit[INPUT_DEVICE_ID_LED_MAX / BITS_PER_LONG + 1];
 kernel_ulong_t sndbit[INPUT_DEVICE_ID_SND_MAX / BITS_PER_LONG + 1];
 kernel_ulong_t ffbit[INPUT_DEVICE_ID_FF_MAX / BITS_PER_LONG + 1];
 kernel_ulong_t swbit[INPUT_DEVICE_ID_SW_MAX / BITS_PER_LONG + 1];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kernel_ulong_t driver_info;
};
#define EISA_SIG_LEN 8
struct eisa_device_id {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char sig[EISA_SIG_LEN];
 kernel_ulong_t driver_data;
};
#define EISA_DEVICE_MODALIAS_FMT "eisa:s%s"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct parisc_device_id {
 __u8 hw_type;
 __u8 hversion_rev;
 __u16 hversion;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 sversion;
};
#define PA_HWTYPE_ANY_ID 0xff
#define PA_HVERSION_REV_ANY_ID 0xff
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PA_HVERSION_ANY_ID 0xffff
#define PA_SVERSION_ANY_ID 0xffffffff
#define SDIO_ANY_ID (~0)
struct sdio_device_id {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 vendor;
 __u16 device;
 kernel_ulong_t driver_data;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ssb_device_id {
 __u16 vendor;
 __u16 coreid;
 __u8 revision;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define SSB_DEVICE(_vendor, _coreid, _revision)   { .vendor = _vendor, .coreid = _coreid, .revision = _revision, }
#define SSB_DEVTABLE_END   { 0, },
#define SSB_ANY_VENDOR 0xFFFF
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_ANY_ID 0xFFFF
#define SSB_ANY_REV 0xFF
struct bcma_device_id {
 __u16 manuf;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 id;
 __u8 rev;
};
#define BCMA_CORETABLE_END   { 0, },
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_ANY_MANUF 0xFFFF
#define BCMA_ANY_ID 0xFFFF
#define BCMA_ANY_REV 0xFF
#define BCMA_ANY_CLASS 0xFF
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct virtio_device_id {
 __u32 device;
 __u32 vendor;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_DEV_ANY_ID 0xffffffff
struct hv_vmbus_device_id {
 __u8 guid[16];
 kernel_ulong_t driver_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define RPMSG_NAME_SIZE 32
#define RPMSG_DEVICE_MODALIAS_FMT "rpmsg:%s"
struct rpmsg_device_id {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char name[RPMSG_NAME_SIZE];
};
#define I2C_NAME_SIZE 20
#define I2C_MODULE_PREFIX "i2c:"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct i2c_device_id {
 char name[I2C_NAME_SIZE];
 kernel_ulong_t driver_data;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPI_NAME_SIZE 32
#define SPI_MODULE_PREFIX "spi:"
struct spi_device_id {
 char name[SPI_NAME_SIZE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kernel_ulong_t driver_data;
};
enum dmi_field {
 DMI_NONE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMI_BIOS_VENDOR,
 DMI_BIOS_VERSION,
 DMI_BIOS_DATE,
 DMI_SYS_VENDOR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMI_PRODUCT_NAME,
 DMI_PRODUCT_VERSION,
 DMI_PRODUCT_SERIAL,
 DMI_PRODUCT_UUID,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMI_BOARD_VENDOR,
 DMI_BOARD_NAME,
 DMI_BOARD_VERSION,
 DMI_BOARD_SERIAL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMI_BOARD_ASSET_TAG,
 DMI_CHASSIS_VENDOR,
 DMI_CHASSIS_TYPE,
 DMI_CHASSIS_VERSION,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMI_CHASSIS_SERIAL,
 DMI_CHASSIS_ASSET_TAG,
 DMI_STRING_MAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dmi_strmatch {
 unsigned char slot;
 char substr[79];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dmi_system_id {
 int (*callback)(const struct dmi_system_id *);
 const char *ident;
 struct dmi_strmatch matches[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *driver_data;
};
#define dmi_device_id dmi_system_id
#define DMI_MATCH(a, b) { a, b }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PLATFORM_NAME_SIZE 20
#define PLATFORM_MODULE_PREFIX "platform:"
struct platform_device_id {
 char name[PLATFORM_NAME_SIZE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kernel_ulong_t driver_data;
};
#define MDIO_MODULE_PREFIX "mdio:"
#define MDIO_ID_FMT "%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MDIO_ID_ARGS(_id)   (_id)>>31, ((_id)>>30) & 1, ((_id)>>29) & 1, ((_id)>>28) & 1,   ((_id)>>27) & 1, ((_id)>>26) & 1, ((_id)>>25) & 1, ((_id)>>24) & 1,   ((_id)>>23) & 1, ((_id)>>22) & 1, ((_id)>>21) & 1, ((_id)>>20) & 1,   ((_id)>>19) & 1, ((_id)>>18) & 1, ((_id)>>17) & 1, ((_id)>>16) & 1,   ((_id)>>15) & 1, ((_id)>>14) & 1, ((_id)>>13) & 1, ((_id)>>12) & 1,   ((_id)>>11) & 1, ((_id)>>10) & 1, ((_id)>>9) & 1, ((_id)>>8) & 1,   ((_id)>>7) & 1, ((_id)>>6) & 1, ((_id)>>5) & 1, ((_id)>>4) & 1,   ((_id)>>3) & 1, ((_id)>>2) & 1, ((_id)>>1) & 1, (_id) & 1
struct mdio_device_id {
 __u32 phy_id;
 __u32 phy_id_mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct zorro_device_id {
 __u32 id;
 kernel_ulong_t driver_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define ZORRO_WILDCARD (0xffffffff)
#define ZORRO_DEVICE_MODALIAS_FMT "zorro:i%08X"
#define ISAPNP_ANY_ID 0xffff
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct isapnp_device_id {
 unsigned short card_vendor, card_device;
 unsigned short vendor, function;
 kernel_ulong_t driver_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct amba_id {
 unsigned int id;
 unsigned int mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *data;
};
struct x86_cpu_id {
 __u16 vendor;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 family;
 __u16 model;
 __u16 feature;
 kernel_ulong_t driver_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define X86_FEATURE_MATCH(x)   { X86_VENDOR_ANY, X86_FAMILY_ANY, X86_MODEL_ANY, x }
#define X86_VENDOR_ANY 0xffff
#define X86_FAMILY_ANY 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define X86_MODEL_ANY 0
#define X86_FEATURE_ANY 0
#define IPACK_ANY_FORMAT 0xff
#define IPACK_ANY_ID (~0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ipack_device_id {
 __u8 format;
 __u32 vendor;
 __u32 device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define MEI_CL_MODULE_PREFIX "mei:"
#define MEI_CL_NAME_SIZE 32
struct mei_cl_device_id {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char name[MEI_CL_NAME_SIZE];
 kernel_ulong_t driver_info;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
