/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright (C) 2026 Yixun Lan <dlan@kernel.org>
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#define CFG_SYS_NS16550_IER	0x40

#define RISCV_SMODE_TIMER_FREQ	24000000

#define CFG_EXTRA_ENV_SETTINGS \
	"kernel_addr_r=0x140100000\0" \
	"kernel_comp_addr_r=0x110000000\0" \
	"kernel_comp_size=0x20000000\0" \
	"fdt_addr_r=0x138000000\0" \
	"fdtoverlay_addr_r=0x138200000\0" \
	"scriptaddr=0x138300000\0" \
	"pxefile_addr_r=0x140000000\0" \
	"ramdisk_addr_r=0x130000000\0" \
	"bootcmd=setenv pxeuuid k3-pico; setenv serverip 10.1.0.10; setenv ipaddr 10.1.0.5; pxe get; pxe boot\0"


#endif /* __CONFIG_H */
