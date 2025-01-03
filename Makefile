SHELL := /bin/sh
FW_DIR	:= /lib/firmware
MDL_DIR	:= /lib/modules/$(shell uname -r)
DRV_DIR	:= $(MDL_DIR)/kernel/drivers/bluetooth
EXTRA_CFLAGS += -DCONFIG_BT_RTL

ifneq ($(KERNELRELEASE),)

	obj-m := btusb.o btrtl.o btintel.o btbcm.o btmtk.o

else
	PWD := $(shell pwd)
	KVER := $(shell uname -r)
	KDIR := /lib/modules/$(KVER)/build

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	rm -rf *.o *.mod.c *.mod.o *.ko *.symvers *.order *.a *.mod
endif

uninstall:
	rm -f $(DRV_DIR)/btusb.ko*
	depmod -a $(MDL_DIR)
	echo "uninstalled revised btusb"
