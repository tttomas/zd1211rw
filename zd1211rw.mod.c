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
	{ 0x35ec255d, "module_layout" },
	{ 0x7286b80f, "ieee80211_rx_irqsafe" },
	{ 0xcea0a119, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x405c1144, "get_seconds" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeec24d31, "usb_wait_anchor_empty_timeout" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x93d085b2, "dev_set_drvdata" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x8949858b, "schedule_work" },
	{ 0x5204809, "ieee80211_beacon_get_tim" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xf921be04, "usb_kill_urb" },
	{ 0x95aaa356, "usb_reset_configuration" },
	{ 0x84088167, "ieee80211_unregister_hw" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x6baae653, "cancel_delayed_work_sync" },
	{ 0x6339a8bc, "mutex_unlock" },
	{ 0x7d11c268, "jiffies" },
	{ 0x88e090f0, "skb_unlink" },
	{ 0xb03fa3d9, "ieee80211_stop_queues" },
	{ 0xbe51885e, "usb_unanchor_urb" },
	{ 0x1c754e0b, "__netdev_alloc_skb" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x2bc95bd4, "memset" },
	{ 0x35af9caf, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x985f683d, "usb_deregister" },
	{ 0xc5c74531, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0x20985477, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xb4390f9a, "mcount" },
	{ 0x64d0da33, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8c4e3553, "skb_push" },
	{ 0xcf510c4a, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3db4e6cd, "skb_pull" },
	{ 0x6ebd53a5, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x26a39874, "dev_kfree_skb_any" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6dea4355, "usb_queue_reset_device" },
	{ 0xa5d105d5, "skb_queue_tail" },
	{ 0x18882e2f, "_dev_info" },
	{ 0xee48b157, "usb_submit_urb" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x8c4db1b5, "usb_kill_anchored_urbs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd44c22ec, "usb_reset_device" },
	{ 0xe0d81039, "compat_dependency_symbol" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x89b5c527, "usb_bulk_msg" },
	{ 0x839b631e, "ieee80211_tx_status_irqsafe" },
	{ 0xce4e6436, "kfree_skb" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x725f128d, "ieee80211_get_buffered_bc" },
	{ 0x689898ca, "usb_interrupt_msg" },
	{ 0x41ad0272, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x991fe573, "usb_get_intf" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x879ae946, "ieee80211_register_hw" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x3990dabc, "regulatory_hint" },
	{ 0x2e60bace, "memcpy" },
	{ 0xfa3fbd83, "ieee80211_alloc_hw" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x4f99f09f, "usb_register_driver" },
	{ 0xdd18e5cd, "request_firmware" },
	{ 0x48961d9a, "ieee80211_free_hw" },
	{ 0x140bca3c, "skb_dequeue" },
	{ 0x6143a69d, "dev_warn" },
	{ 0x19a9e62b, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x5a8ba511, "consume_skb" },
	{ 0x1aa74aec, "usb_alloc_coherent" },
	{ 0xcfc43670, "skb_put" },
	{ 0xb1d9523e, "wait_for_completion_timeout" },
	{ 0xddffa24, "dev_get_drvdata" },
	{ 0x1657a9cc, "usb_free_urb" },
	{ 0x6632d5, "release_firmware" },
	{ 0x47c149ab, "queue_delayed_work" },
	{ 0xcb74abf0, "usb_anchor_urb" },
	{ 0xa00eda78, "usb_alloc_urb" },
	{ 0x29108e57, "usb_put_intf" },
	{ 0x9d2a0c10, "ieee80211_queue_stopped" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,compat,cfg80211";

MODULE_ALIAS("usb:v0105p145Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p3401d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p3402d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p3407d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p3409d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v079Bp004Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p6001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACEp1211d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACEpA211d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p170Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B3Bp1630d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B3Bp5630d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p9071d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p9075d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v126FpA006d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v129Bp1666d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13B1p001Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1435p0711d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v14EApAB10d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v14EApAB13d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v157Ep300Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v157Ep300Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v157Ep3204d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v157Ep3207d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p2000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v6891pA727d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0053p5301d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0409p0248d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p00DAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0471p1236d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0471p1237d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp705Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0257d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p340Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p340Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p3410d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p3412d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p3413d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v079Bp0062d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p6001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07FAp1196d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083Ap4505d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083ApE501d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083ApE503d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083ApE506d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACEp1215d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACEpB215d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p171Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp0121d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0CDEp001Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0036d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v129Bp1667d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13B1p0024d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v157Ep300Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1582p6003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019p5303d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pED01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACEp2011d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACEp20FFd*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "915BEAFC402AED58E2739A7");
