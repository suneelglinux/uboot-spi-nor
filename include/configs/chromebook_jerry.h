/*
 * (C) Copyright 2015 Google, Inc
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#define ROCKCHIP_DEVICE_SETTINGS \
		"stdin=serial,cros-ec-keyb\0" \
		"stdout=serial,vidconsole\0" \
		"stderr=serial,vidconsole\0"

#include <configs/rk3288_common.h>

#define CONFIG_ENV_IS_NOWHERE
#define CONFIG_SPL_SPI_SUPPORT
#define CONFIG_SPL_SPI_NOR_SUPPORT
#define CONFIG_SPL_MTD_SUPPORT
#define CONFIG_SPL_SPI_LOAD
#define CONFIG_SPI_NOR_MISC

#define CONFIG_CMD_SF_TEST
#define CONFIG_CMD_TIME

#undef CONFIG_SPL_GPIO_SUPPORT

#define CONFIG_KEYBOARD

#define CONFIG_SPL_POWER_SUPPORT
#define CONFIG_SPL_I2C_SUPPORT

#define CONFIG_SYS_WHITE_ON_BLACK
#define CONFIG_CONSOLE_SCROLL_LINES		10

#endif
