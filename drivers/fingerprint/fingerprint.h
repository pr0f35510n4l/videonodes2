/*
<<<<<<< HEAD
 * Copyright (C) 2013 Samsung Electronics. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
=======
 *  Copyright (C) 2017, Samsung Electronics Co. Ltd. All Rights Reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
>>>>>>> 6e0bf6af... a6 without drivers/media/platform/exynos
 */

#ifndef FINGERPRINT_H_
#define FINGERPRINT_H_

#include <linux/clk.h>
<<<<<<< HEAD
=======
#include "fingerprint_sysfs.h"
>>>>>>> 6e0bf6af... a6 without drivers/media/platform/exynos

/* fingerprint debug timer */
#define FPSENSOR_DEBUG_TIMER_SEC (10 * HZ)

/* For Sensor Type Check */
enum {
<<<<<<< HEAD
	SENSOR_UNKNOWN = -1,
=======
	SENSOR_OOO = -2,
	SENSOR_UNKNOWN,
>>>>>>> 6e0bf6af... a6 without drivers/media/platform/exynos
	SENSOR_FAILED,
	SENSOR_VIPER,
	SENSOR_RAPTOR,
	SENSOR_EGIS,
<<<<<<< HEAD
};

#define SENSOR_STATUS_SIZE 5
static char sensor_status[SENSOR_STATUS_SIZE][8] ={"unknown", "failed",
	"viper", "raptor", "egis"};


#ifdef CONFIG_SENSORS_FINGERPRINT_DUALIZATION
extern int FP_CHECK; /* extern variable */
=======
	SENSOR_VIPER_WOG,
	SENSOR_NAMSAN,
	SENSOR_CPID,
	SENSOR_MAXIMUM,
};

#define SENSOR_STATUS_SIZE 9
static char sensor_status[SENSOR_STATUS_SIZE][10] = {"ooo", "unknown", "failed",
	"viper", "raptor", "egis", "viper_wog", "namsan", "cpid"};

/* For Finger Detect Mode */
enum {
	DETECT_NORMAL = 0,
	DETECT_ADM,			/* Always on Detect Mode */
};

#if defined(CONFIG_SOC_EXYNOS7570) || defined(CONFIG_SOC_EXYNOS7870) \
	|| defined(CONFIG_SOC_EXYNOS7880) || defined(CONFIG_SOC_EXYNOS8890) \
	|| defined(CONFIG_SOC_EXYNOS8895) || defined(CONFIG_SOC_EXYNOS9810)
#define FP_ENABLE_AP_CONFIG
>>>>>>> 6e0bf6af... a6 without drivers/media/platform/exynos
#endif

#ifdef ENABLE_SENSORS_FPRINT_SECURE
#define MC_FC_FP_PM_SUSPEND ((uint32_t)(0x83000021))
#define MC_FC_FP_PM_RESUME ((uint32_t)(0x83000022))
<<<<<<< HEAD
#define MC_FC_FP_CS_SET ((uint32_t)(0x83000027))
#define MC_FC_FP_PM_SUSPEND_CS_HIGH ((uint32_t)(0x83000028))

=======
#define MC_FC_FP_PM_SUSPEND_RETAIN ((uint32_t)(0x83000026))
#define MC_FC_FP_CS_SET ((uint32_t)(0x83000027))
#define MC_FC_FP_PM_SUSPEND_CS_HIGH ((uint32_t)(0x83000028))

/* using for awake the samsung FP daemon */
extern bool fp_lockscreen_mode;
#ifdef CONFIG_SENSORS_FP_LOCKSCREEN_MODE
/* input/Keyboard/gpio_keys.c */
extern bool wakeup_by_key(void);
/* export variable for signaling */
EXPORT_SYMBOL(fp_lockscreen_mode);
#endif

>>>>>>> 6e0bf6af... a6 without drivers/media/platform/exynos
extern int fpsensor_goto_suspend;
EXPORT_SYMBOL(fpsensor_goto_suspend);
#endif

#endif
