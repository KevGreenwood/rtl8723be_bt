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


MODULE_INFO(depends, "crc8,bluetooth");

MODULE_ALIAS("of:N*T*Cnxp,88w8987-bt");
MODULE_ALIAS("of:N*T*Cnxp,88w8987-btC*");
MODULE_ALIAS("of:N*T*Cnxp,88w8997-bt");
MODULE_ALIAS("of:N*T*Cnxp,88w8997-btC*");

MODULE_INFO(srcversion, "9EE356BFCF44D51D8AAD941");
