AM_CPPFLAGS = \
	-DG_LOG_DOMAIN=\"libappletmail\" \
	-DPACKAGE_LOCALE_DIR=\"$(localedir)\" \
	$(PLATFORM_CPPFLAGS)

ACLOCAL_AMFLAGS="-I m4"

#
# Mailwatch plugin
#
plugindir = $(libdir)/xfce4/panel/plugins

plugin_LTLIBRARIES = \
	libappletmail.la

libappletmail_la_SOURCES = \
	mailwatch-plugin.c

libappletmail_la_DEPENDENCIES = \
	$(top_builddir)/libmailwatch-core/libmailwatch-core.la

libappletmail_la_CFLAGS = \
	-I$(top_srcdir)/libmailwatch-core \
	$(GTHREAD_CFLAGS) \
	$(LIBXFCE4PANEL_CFLAGS) \
	$(LIBXFCE4UI_CFLAGS) \
	$(EXO_CFLAGS) \
	$(LIBSECRET_CFLAGS) \
	$(PLATFORM_CFLAGS)

libappletmail_la_LDFLAGS = \
	-avoid-version \
	-module \
	-no-undefined \
	-export-symbols-regex '^xfce_panel_module_(preinit|init|construct)' \
	$(PLATFORM_LDFLAGS)

libappletmail_la_LIBADD = \
	$(top_builddir)/libmailwatch-core/libmailwatch-core.la \
	$(GTHREAD_LIBS) \
	$(LIBXFCE4PANEL_LIBS) \
	$(LIBXFCE4UI_LIBS) \
	$(GNUTLS_LIBS) \
	$(LIBGCRYPT_LIBS) \
	$(EXO_LIBS) \
	$(LIBSECRET_LIBS)

#
# Desktop file
#
desktopdir = $(datadir)/xfce4/panel/plugins
desktop_DATA = applet-mail.desktop
@INTLTOOL_DESKTOP_RULE@

EXTRA_DIST = \
	applet-mail.desktop.in

DISTCLEANFILES = \
	$(desktop_DATA)
