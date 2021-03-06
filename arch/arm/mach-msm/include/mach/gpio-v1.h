/*
 * Copyright (C) 2007 Google, Inc.
 * Copyright (c) 2009-2010, The Linux Foundation. All rights reserved.
 * Author: Mike Lockwood <lockwood@android.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifndef __ASM_ARCH_MSM_GPIO_V1_H
#define __ASM_ARCH_MSM_GPIO_V1_H

#include <linux/interrupt.h>
#include <asm-generic/gpio.h>
#include <mach/irqs.h>

#define FIRST_BOARD_GPIO	NR_GPIO_IRQS

static inline int gpio_get_value(unsigned gpio)
{
	return __gpio_get_value(gpio);
}

static inline void gpio_set_value(unsigned gpio, int value)
{
	__gpio_set_value(gpio, value);
}

static inline int gpio_cansleep(unsigned gpio)
{
	return __gpio_cansleep(gpio);
}

static inline int gpio_to_irq(unsigned gpio)
{
	return __gpio_to_irq(gpio);
}

void msm_gpio_enter_sleep(int from_idle);
void msm_gpio_exit_sleep(void);

struct msm_gpio {
	u32 gpio_cfg;
	const char *label;
};

int msm_gpios_request_enable(const struct msm_gpio *table, int size);

void msm_gpios_disable_free(const struct msm_gpio *table, int size);

int msm_gpios_request(const struct msm_gpio *table, int size);

void msm_gpios_free(const struct msm_gpio *table, int size);

int msm_gpios_enable(const struct msm_gpio *table, int size);

int msm_gpios_disable(const struct msm_gpio *table, int size);



enum {
	GPIO_CFG_INPUT,
	GPIO_CFG_OUTPUT,
};

enum {
	GPIO_CFG_NO_PULL,
	GPIO_CFG_PULL_DOWN,
	GPIO_CFG_KEEPER,
	GPIO_CFG_PULL_UP,
};

enum {
	GPIO_CFG_2MA,
	GPIO_CFG_4MA,
	GPIO_CFG_6MA,
	GPIO_CFG_8MA,
	GPIO_CFG_10MA,
	GPIO_CFG_12MA,
	GPIO_CFG_14MA,
	GPIO_CFG_16MA,
};

enum {
	GPIO_CFG_ENABLE,
	GPIO_CFG_DISABLE,
};

#define GPIO_CFG(gpio, func, dir, pull, drvstr) \
	((((gpio) & 0x3FF) << 4)        |	  \
	 ((func) & 0xf)                  |	  \
	 (((dir) & 0x1) << 14)           |	  \
	 (((pull) & 0x3) << 15)          |	  \
	 (((drvstr) & 0xF) << 17))

#define GPIO_PIN(gpio_cfg)    (((gpio_cfg) >>  4) & 0x3ff)
#define GPIO_FUNC(gpio_cfg)   (((gpio_cfg) >>  0) & 0xf)
#define GPIO_DIR(gpio_cfg)    (((gpio_cfg) >> 14) & 0x1)
#define GPIO_PULL(gpio_cfg)   (((gpio_cfg) >> 15) & 0x3)
#define GPIO_DRVSTR(gpio_cfg) (((gpio_cfg) >> 17) & 0xf)

int gpio_tlmm_config(unsigned config, unsigned disable);

#endif 
