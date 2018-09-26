/*
 *  xfce4-mailwatch-plugin - a mail notification applet for the xfce4 panel
 *  Copyright (c) 2005-2008 Brian Tarricone <bjt23@cornell.edu>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License ONLY.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __MAILWATCH_UTILS_H__
#define __MAILWATCH_UTILS_H__

#include <gtk/gtk.h>

G_BEGIN_DECLS

typedef enum
{
    AUTH_NONE = 0,
    AUTH_SSL_PORT,
    AUTH_STARTTLS
} XfceMailwatchAuthType;

GtkWidget *xfce_mailwatch_custom_button_new(const gchar *text,
                                            const gchar *icon);
GtkWidget *xfce_mailwatch_create_framebox(const gchar *title,
                                          GtkWidget **frame_bin);

gchar *xfce_mailwatch_cram_md5(const gchar *username,
                               const gchar *password,
                               const gchar *challenge_base64);

gint xfce_mailwatch_base64_encode(const guint8 *data,
                                  gsize size,
                                  gchar **str);
gint xfce_mailwatch_base64_decode(const gchar *str,
                                  guint8 *data,
                                  gsize size);

gchar* xfce_mailwatch_get_password(const gchar* host, const gchar* username);
void xfce_mailwatch_set_password(const gchar* host, const gchar* username,
                                 const gchar* password);

G_END_DECLS

#endif
