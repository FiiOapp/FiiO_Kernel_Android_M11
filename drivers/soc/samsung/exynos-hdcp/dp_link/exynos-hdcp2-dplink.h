/* driver/soc/samsung/exynos-hdcp/dplink/exynos-hdcp2-dplink.h
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/
#ifndef __EXYNOS_HDCP2_DPLINK_H__
#define __EXYNOS_HDCP2_DPLINK_H__

#if defined(CONFIG_HDCP2_EMULATION_MODE)
int dplink_emul_handler(int cmd);
#endif

/* Do hdcp2.2 authentication with DP Receiver
 * and enable encryption if authentication is succeed.
 * @return
 *  - 0: Success
 *  - ENOMEM: hdcp context open fail
 *  - EACCES: authentication fail
 */
int hdcp_dplink_authenticate(void);

#endif
