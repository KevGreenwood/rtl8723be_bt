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

KSYMTAB_FUNC(qca_read_soc_version, "_gpl", "");
KSYMTAB_FUNC(qca_send_pre_shutdown_cmd, "_gpl", "");
KSYMTAB_FUNC(qca_set_bdaddr_rome, "_gpl", "");
KSYMTAB_FUNC(qca_uart_setup, "_gpl", "");
KSYMTAB_FUNC(qca_set_bdaddr, "_gpl", "");

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "09E3149094277572BB745F4");
