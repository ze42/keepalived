/*
 * Soft:        Keepalived is a failover program for the LVS project
 *              <www.linuxvirtualserver.org>. It monitor & manipulate
 *              a loadbalanced server pool using multi-layer checks.
 *
 * Part:        pidfile.c include file.
 *
 * Version:     $Id: pidfile.h,v 1.1.0 2003/07/20 23:41:34 acassen Exp $
 *
 * Author:      Alexandre Cassen, <acassen@linux-vs.org>
 *
 *              This program is distributed in the hope that it will be useful,
 *              but WITHOUT ANY WARRANTY; without even the implied warranty of
 *              MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *              See the GNU General Public License for more details.
 *
 *              This program is free software; you can redistribute it and/or
 *              modify it under the terms of the GNU General Public License
 *              as published by the Free Software Foundation; either version
 *              2 of the License, or (at your option) any later version.
 */

#ifndef _PIDFILE_H
#define _PIDFILE_H

/* system include */
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <syslog.h>

/* lock pidfile */
#define KEEPALIVED_PID_FILE "/var/run/keepalived.pid"
#define VRRP_PID_FILE "/var/run/keepalived_vrrp.pid"
#define CHECKERS_PID_FILE "/var/run/keepalived_checkers.pid"

/* Prototypes */
extern int pidfile_write(char *pid_file, int pid);
extern void pidfile_rm(char *pid_file);
extern int keepalived_running(void);
extern int vrrp_running(void);
extern int checkers_running(void);

#endif