/* Copyright (c) 2001 Matej Pfajfar.
 * Copyright (c) 2001-2004, Roger Dingledine.
 * Copyright (c) 2004-2006, Roger Dingledine, Nick Mathewson.
 * Copyright (c) 2007-2018, The Tor Project, Inc. */
/* See LICENSE for licensing information */

#ifndef TOR_NETSTATUS_H
#define TOR_NETSTATUS_H

int net_is_disabled(void);
int net_is_completely_disabled(void);

void note_user_activity(time_t now);
void reset_user_activity(time_t now);
time_t get_last_user_activity_time(void);

void set_network_participation(bool participation);
bool is_participating_on_network(void);

#endif
