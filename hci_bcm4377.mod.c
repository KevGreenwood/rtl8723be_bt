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


MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("pci:v000014E4d00005FA0sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00005F69sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00005F71sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00005F72sv*sd*bc02sc80i*");

MODULE_INFO(srcversion, "2014FD2A2CB413A6DA4F287");
