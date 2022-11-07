/*
 * Copyright(c) 2006 to 2022 ZettaScale Technology and others
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v. 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License
 * v. 1.0 which is available at
 * http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause
 */
#ifndef DDSI_CONFIG_IMPL_H
#define DDSI_CONFIG_IMPL_H

#include <stdio.h>

#include "dds/ddsrt/attributes.h"
#include "dds/ddsi/ddsi_config.h"

#if defined (__cplusplus)
extern "C" {
#endif

struct ddsi_cfgst;

struct ddsi_cfgst *ddsi_config_init (const char *config, struct ddsi_config *cfg, uint32_t domid) ddsrt_nonnull((1,2));
DDS_EXPORT void ddsi_config_fini (struct ddsi_cfgst *cfgst);

#if defined (__cplusplus)
}
#endif

#endif /* DDSI_CONFIG_IMPL_H */
