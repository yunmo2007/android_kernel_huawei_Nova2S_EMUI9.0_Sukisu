/*
 * (C) COPYRIGHT 2015-2016 ARM Limited. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation, and any use by you of this program is subject to the terms
 * of such GNU licence.
 *
 * A copy of the licence is included with the program, and can also be obtained
 * from Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */

/* AUTOMATICALLY GENERATED FILE. If you want to amend the issues/features,
 * please update base/tools/hwconfig_generator/hwc_{issues,features}.py
 * For more information see base/tools/hwconfig_generator/README
 */

#ifndef _KBASE_CONFIG_HI_FEATURES_H_
#define _KBASE_CONFIG_HI_FEATURES_H_

enum kbase_hi_feature {
	KBASE_FEATURE_HI0001,
	KBASE_FEATURE_HI0002,
	KBASE_FEATURE_HI0003,
	KBASE_FEATURE_HI0004,
	KBASE_FEATURE_HI0005,
	KBASE_FEATURE_HI0006,
	KBASE_FEATURE_HI0007,
	KBASE_FEATURE_HI0008,
	KBASE_FEATURE_HI0009, /* for avs benchmark collect, When an exception occurs , do BUG_ON */
	KBASE_FEATURE_HI0010,
	KBASE_FEATURE_HI0011,
	KBASE_FEATURE_HI0012, /* for tSIx mem auto shutdown */
	KBASE_FEATURE_HI0013, /* use always on as power policy in FPGA */
	KBASE_FEATURE_HI0014, /* es gpu deep sleep and auto shutdown */
	KBASE_FEATURE_HI0015, /* cs gpu deep sleep and auto shutdown */
	KBASE_FEATURE_HI0016, /* open bug on for gpu steadiness */
	KBASE_HI_FEATURE_END
};

static const enum kbase_hi_feature kbase_hi_feature_t880_r0p2[] = {
	KBASE_FEATURE_HI0002,
	KBASE_FEATURE_HI0004,
	KBASE_FEATURE_HI0008,
	KBASE_HI_FEATURE_END
};

static const enum kbase_hi_feature kbase_hi_feature_t830_r2p0[] = {
	KBASE_FEATURE_HI0004,
	KBASE_FEATURE_HI0007,
	KBASE_FEATURE_HI0008,
	KBASE_HI_FEATURE_END
};

static const enum kbase_hi_feature kbase_hi_feature_t880_r2p0[] = {
	KBASE_FEATURE_HI0002,
	KBASE_FEATURE_HI0003,
	KBASE_FEATURE_HI0004,
	KBASE_FEATURE_HI0005,
	KBASE_FEATURE_HI0006,
	KBASE_FEATURE_HI0008,
	KBASE_HI_FEATURE_END
};

static const enum kbase_hi_feature kbase_hi_feature_tMIx_r0p0[] = {
	KBASE_FEATURE_HI0004,
	KBASE_FEATURE_HI0006,
	KBASE_FEATURE_HI0008,
#ifdef CONFIG_HISI_ENABLE_HPM_DATA_COLLECT
	KBASE_FEATURE_HI0009,
#endif
	KBASE_HI_FEATURE_END
};
static const enum kbase_hi_feature kbase_hi_feature_tHEx_r0p0[] = {
	KBASE_FEATURE_HI0007,
	KBASE_FEATURE_HI0008,
	KBASE_FEATURE_HI0010,
#ifdef CONFIG_MALI_NORR
	KBASE_FEATURE_HI0014,
#endif
	KBASE_FEATURE_HI0016,
	KBASE_HI_FEATURE_END
};
static const enum kbase_hi_feature kbase_hi_feature_tNOx_r0p0[] = {
	KBASE_FEATURE_HI0007,
	KBASE_FEATURE_HI0008,
#ifdef CONFIG_HISI_ENABLE_HPM_DATA_COLLECT
	KBASE_FEATURE_HI0009,
#endif
#ifdef CONFIG_MALI_NORR
	KBASE_FEATURE_HI0015,
#endif
	KBASE_FEATURE_HI0016,
	KBASE_HI_FEATURE_END
};
static const enum kbase_hi_feature kbase_hi_feature_tGOx_r1p0[] = {
	KBASE_FEATURE_HI0007,
	KBASE_FEATURE_HI0008,
#ifdef CONFIG_HISI_ENABLE_HPM_DATA_COLLECT
	KBASE_FEATURE_HI0009,
#endif
	KBASE_FEATURE_HI0013,
	KBASE_FEATURE_HI0016,
	KBASE_HI_FEATURE_END
};
static const enum kbase_hi_feature kbase_hi_feature_tSIx_r1p1[] = {
	KBASE_FEATURE_HI0002,
	KBASE_FEATURE_HI0005,
	KBASE_FEATURE_HI0007,
	KBASE_FEATURE_HI0008,
#ifdef CONFIG_HISI_ENABLE_HPM_DATA_COLLECT
	KBASE_FEATURE_HI0009,
#endif
	KBASE_FEATURE_HI0010,
	KBASE_FEATURE_HI0012,
	KBASE_HI_FEATURE_END
};
#endif /* _BASE_HWCONFIG_ISSUES_H_ */
