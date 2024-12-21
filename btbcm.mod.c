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

KSYMTAB_FUNC(btbcm_check_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btbcm_set_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btbcm_read_pcm_int_params, "_gpl", "");
KSYMTAB_FUNC(btbcm_write_pcm_int_params, "_gpl", "");
KSYMTAB_FUNC(btbcm_patchram, "", "");
KSYMTAB_FUNC(btbcm_initialize, "_gpl", "");
KSYMTAB_FUNC(btbcm_finalize, "_gpl", "");
KSYMTAB_FUNC(btbcm_setup_patchram, "_gpl", "");
KSYMTAB_FUNC(btbcm_setup_apple, "_gpl", "");

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "5CC6E2F9B33C5D94C31E8FD");
