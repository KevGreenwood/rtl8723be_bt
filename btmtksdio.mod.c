#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");


MODULE_INFO(depends, "bluetooth,mmc_core,btmtk");

MODULE_ALIAS("sdio:c*v037Ad7663*");
MODULE_ALIAS("sdio:c*v037Ad7668*");
MODULE_ALIAS("sdio:c*v037Ad7961*");

MODULE_INFO(srcversion, "DF2A3390657D7204CCD83A2");
