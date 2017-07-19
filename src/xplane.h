/*
 * CDDL HEADER START
 *
 * This file and its contents are supplied under the terms of the
 * Common Development and Distribution License ("CDDL"), version 1.0.
 * You may only use this file in accordance with the terms of version
 * 1.0 of the CDDL.
 *
 * A full copy of the text of the CDDL should have accompanied this
 * source.  A copy of the CDDL is also available via the Internet at
 * http://www.illumos.org/license/CDDL.
 *
 * CDDL HEADER END
*/
/*
 * Copyright 2017 Saso Kiselkov. All rights reserved.
 */

#ifndef	_BP_XPLANE_H_
#define	_BP_XPLANE_H_

#include <stdlib.h>

#include <XPLMDefs.h>

#include <acfutils/avl.h>
#include <acfutils/geom.h>
#include <acfutils/list.h>

#ifdef __cplusplus
extern "C" {
#endif

extern const char *const bp_xpdir;
extern const char *const bp_plugindir;
extern bool_t bp_started;
extern bool_t slave_mode;
extern bool_t op_complete;
extern char bp_tug_name[64];

/*
 * X-Plane-specific plugin hooks.
 */
PLUGIN_API int XPluginStart(char *name, char *sig, char *desc);
PLUGIN_API void XPluginStop(void);
PLUGIN_API int XPluginEnable(void);
PLUGIN_API void XPluginDisable(void);
PLUGIN_API void XPluginReceiveMessage(XPLMPluginID from, int msg, void *param);

void bp_done_notify(void);

#ifdef __cplusplus
}
#endif

#endif	/* _BP_XPLANE_H_ */
