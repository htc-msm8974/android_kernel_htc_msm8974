/*
 * Copyright (c) 2011, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ARCH_ARM_MACH_MSM_INCLUDE_MACH_RPM_REGULATOR_8660_H
#define __ARCH_ARM_MACH_MSM_INCLUDE_MACH_RPM_REGULATOR_8660_H

#define RPM_VREG_PIN_CTRL_PM8058_A0	0x01
#define RPM_VREG_PIN_CTRL_PM8058_A1	0x02
#define RPM_VREG_PIN_CTRL_PM8058_D0	0x04
#define RPM_VREG_PIN_CTRL_PM8058_D1	0x08

#define RPM_VREG_PIN_CTRL_PM8901_A0	0x01
#define RPM_VREG_PIN_CTRL_PM8901_A1	0x02
#define RPM_VREG_PIN_CTRL_PM8901_D0	0x04
#define RPM_VREG_PIN_CTRL_PM8901_D1	0x08


enum rpm_vreg_pin_fn_8660 {
	RPM_VREG_PIN_FN_8660_ENABLE = 0,
	RPM_VREG_PIN_FN_8660_MODE,
	RPM_VREG_PIN_FN_8660_SLEEP_B,
	RPM_VREG_PIN_FN_8660_NONE,
};

enum rpm_vreg_force_mode_8660 {
	RPM_VREG_FORCE_MODE_8660_PIN_CTRL = 0,
	RPM_VREG_FORCE_MODE_8660_NONE = 0,
	RPM_VREG_FORCE_MODE_8660_LPM,
	RPM_VREG_FORCE_MODE_8660_HPM,
};

enum rpm_vreg_id_8660 {
	RPM_VREG_ID_PM8058_L0,
	RPM_VREG_ID_PM8058_L1,
	RPM_VREG_ID_PM8058_L2,
	RPM_VREG_ID_PM8058_L3,
	RPM_VREG_ID_PM8058_L4,
	RPM_VREG_ID_PM8058_L5,
	RPM_VREG_ID_PM8058_L6,
	RPM_VREG_ID_PM8058_L7,
	RPM_VREG_ID_PM8058_L8,
	RPM_VREG_ID_PM8058_L9,
	RPM_VREG_ID_PM8058_L10,
	RPM_VREG_ID_PM8058_L11,
	RPM_VREG_ID_PM8058_L12,
	RPM_VREG_ID_PM8058_L13,
	RPM_VREG_ID_PM8058_L14,
	RPM_VREG_ID_PM8058_L15,
	RPM_VREG_ID_PM8058_L16,
	RPM_VREG_ID_PM8058_L17,
	RPM_VREG_ID_PM8058_L18,
	RPM_VREG_ID_PM8058_L19,
	RPM_VREG_ID_PM8058_L20,
	RPM_VREG_ID_PM8058_L21,
	RPM_VREG_ID_PM8058_L22,
	RPM_VREG_ID_PM8058_L23,
	RPM_VREG_ID_PM8058_L24,
	RPM_VREG_ID_PM8058_L25,
	RPM_VREG_ID_PM8058_S0,
	RPM_VREG_ID_PM8058_S1,
	RPM_VREG_ID_PM8058_S2,
	RPM_VREG_ID_PM8058_S3,
	RPM_VREG_ID_PM8058_S4,
	RPM_VREG_ID_PM8058_LVS0,
	RPM_VREG_ID_PM8058_LVS1,
	RPM_VREG_ID_PM8058_NCP,
	RPM_VREG_ID_PM8901_L0,
	RPM_VREG_ID_PM8901_L1,
	RPM_VREG_ID_PM8901_L2,
	RPM_VREG_ID_PM8901_L3,
	RPM_VREG_ID_PM8901_L4,
	RPM_VREG_ID_PM8901_L5,
	RPM_VREG_ID_PM8901_L6,
	RPM_VREG_ID_PM8901_S0,
	RPM_VREG_ID_PM8901_S1,
	RPM_VREG_ID_PM8901_S2,
	RPM_VREG_ID_PM8901_S3,
	RPM_VREG_ID_PM8901_S4,
	RPM_VREG_ID_PM8901_LVS0,
	RPM_VREG_ID_PM8901_LVS1,
	RPM_VREG_ID_PM8901_LVS2,
	RPM_VREG_ID_PM8901_LVS3,
	RPM_VREG_ID_PM8901_MVS0,
	RPM_VREG_ID_8660_MAX_REAL = RPM_VREG_ID_PM8901_MVS0,

	
	RPM_VREG_ID_PM8058_L0_PC,
	RPM_VREG_ID_PM8058_L1_PC,
	RPM_VREG_ID_PM8058_L2_PC,
	RPM_VREG_ID_PM8058_L3_PC,
	RPM_VREG_ID_PM8058_L4_PC,
	RPM_VREG_ID_PM8058_L5_PC,
	RPM_VREG_ID_PM8058_L6_PC,
	RPM_VREG_ID_PM8058_L7_PC,
	RPM_VREG_ID_PM8058_L8_PC,
	RPM_VREG_ID_PM8058_L9_PC,
	RPM_VREG_ID_PM8058_L10_PC,
	RPM_VREG_ID_PM8058_L11_PC,
	RPM_VREG_ID_PM8058_L12_PC,
	RPM_VREG_ID_PM8058_L13_PC,
	RPM_VREG_ID_PM8058_L14_PC,
	RPM_VREG_ID_PM8058_L15_PC,
	RPM_VREG_ID_PM8058_L16_PC,
	RPM_VREG_ID_PM8058_L17_PC,
	RPM_VREG_ID_PM8058_L18_PC,
	RPM_VREG_ID_PM8058_L19_PC,
	RPM_VREG_ID_PM8058_L20_PC,
	RPM_VREG_ID_PM8058_L21_PC,
	RPM_VREG_ID_PM8058_L22_PC,
	RPM_VREG_ID_PM8058_L23_PC,
	RPM_VREG_ID_PM8058_L24_PC,
	RPM_VREG_ID_PM8058_L25_PC,
	RPM_VREG_ID_PM8058_S0_PC,
	RPM_VREG_ID_PM8058_S1_PC,
	RPM_VREG_ID_PM8058_S2_PC,
	RPM_VREG_ID_PM8058_S3_PC,
	RPM_VREG_ID_PM8058_S4_PC,
	RPM_VREG_ID_PM8058_LVS0_PC,
	RPM_VREG_ID_PM8058_LVS1_PC,

	RPM_VREG_ID_PM8901_L0_PC,
	RPM_VREG_ID_PM8901_L1_PC,
	RPM_VREG_ID_PM8901_L2_PC,
	RPM_VREG_ID_PM8901_L3_PC,
	RPM_VREG_ID_PM8901_L4_PC,
	RPM_VREG_ID_PM8901_L5_PC,
	RPM_VREG_ID_PM8901_L6_PC,
	RPM_VREG_ID_PM8901_S0_PC,
	RPM_VREG_ID_PM8901_S1_PC,
	RPM_VREG_ID_PM8901_S2_PC,
	RPM_VREG_ID_PM8901_S3_PC,
	RPM_VREG_ID_PM8901_S4_PC,
	RPM_VREG_ID_PM8901_LVS0_PC,
	RPM_VREG_ID_PM8901_LVS1_PC,
	RPM_VREG_ID_PM8901_LVS2_PC,
	RPM_VREG_ID_PM8901_LVS3_PC,
	RPM_VREG_ID_PM8901_MVS0_PC,
	RPM_VREG_ID_8660_MAX = RPM_VREG_ID_PM8901_MVS0_PC,
};

#define RPM_VREG_8660_LDO_50_HPM_MIN_LOAD	5000
#define RPM_VREG_8660_LDO_150_HPM_MIN_LOAD	10000
#define RPM_VREG_8660_LDO_300_HPM_MIN_LOAD	10000
#define RPM_VREG_8660_SMPS_HPM_MIN_LOAD		50000
#define RPM_VREG_8660_FTSMPS_HPM_MIN_LOAD	100000

#endif
