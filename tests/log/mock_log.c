/*
 * mock_log.c
 *
 * Copyright (C) 2012, 2013 James Booth <boothj5@gmail.com>
 *
 * This file is part of Profanity.
 *
 * Profanity is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Profanity is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Profanity.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <glib.h>
#include <setjmp.h>
#include <cmocka.h>

#include "log.h"

void log_init(log_level_t filter) {}
log_level_t log_get_filter(void)
{
    return (log_level_t)mock();
}
void log_reinit(void) {}
void log_close(void) {}
void log_debug(const char * const msg, ...) {}
void log_info(const char * const msg, ...) {}
void log_warning(const char * const msg, ...) {}
void log_error(const char * const msg, ...) {}
void log_msg(log_level_t level, const char * const area,
    const char * const msg) {}
char * get_log_file_location(void)
{
    return (char *)mock();
}

log_level_t log_level_from_string(char *log_level)
{
    return (log_level_t)mock();
}

void chat_log_init(void) {}
void chat_log_chat(const gchar * const login, gchar *other,
    const gchar * const msg, chat_log_direction_t direction, GTimeVal *tv_stamp) {}
void chat_log_close(void) {}
GSList * chat_log_get_previous(const gchar * const login,
    const gchar * const recipient, GSList *history)
{
    return (GSList *)mock();
}

void groupchat_log_init(void) {}
void groupchat_log_chat(const gchar * const login, const gchar * const room,
    const gchar * const nick, const gchar * const msg) {}
