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
	{ 0x4a8fc783, "module_layout" },
	{ 0x8728140, "malloc_sizes" },
	{ 0x9ec26e8b, "hwmon_device_register" },
	{ 0xee805576, "device_create_file" },
	{ 0x7ee6b79e, "clk_get" },
	{ 0xaaf24001, "__mutex_init" },
	{ 0xa2c9ebd6, "dev_set_drvdata" },
	{ 0xdc74cc24, "kmem_cache_alloc" },
	{ 0xea147363, "printk" },
	{ 0xfc5b54a2, "platform_device_register" },
	{ 0x7d11c268, "jiffies" },
	{ 0xbca3b310, "mutex_unlock" },
	{ 0xe21bc571, "clk_disable" },
	{ 0x77fa5d1f, "ns_to_timespec" },
	{ 0xbb9a2c75, "ktime_add_ns" },
	{ 0xa57afc74, "ktime_get" },
	{ 0xfb3d2ab6, "clk_enable" },
	{ 0x76863268, "mutex_lock" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd4692d9e, "platform_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x34041cee, "device_remove_file" },
	{ 0xbe8d478b, "hwmon_device_unregister" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x510a746e, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D59A8B9E1EB062D28EA7387");
