#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(btrtl_set_driver_name, "_gpl", "");
KSYMTAB_FUNC(btrtl_free, "_gpl", "");
KSYMTAB_FUNC(btrtl_initialize, "_gpl", "");
KSYMTAB_FUNC(btrtl_download_firmware, "_gpl", "");
KSYMTAB_FUNC(btrtl_set_quirks, "_gpl", "");
KSYMTAB_FUNC(btrtl_setup_realtek, "_gpl", "");
KSYMTAB_FUNC(btrtl_shutdown_realtek, "_gpl", "");
KSYMTAB_FUNC(btrtl_get_uart_settings, "_gpl", "");

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "9D7E0006A208C15AE7F0A0D");
