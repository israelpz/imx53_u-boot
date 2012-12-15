#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6271f635, "module_layout" },
	{ 0x37c3e76, "__gcov_merge_add" },
	{ 0x10cb01b3, "__gcov_init" },
	{ 0xe3032adb, "remove_proc_entry" },
	{ 0x50eedeb8, "printk" },
	{ 0x6f4c1ab5, "create_proc_entry" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd0d8621b, "strlen" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EE5102EF861BB420189FF42");
