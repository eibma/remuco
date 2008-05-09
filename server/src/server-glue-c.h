/* Generated by dbus-binding-tool; do not edit! */

#include <glib/gtypes.h>
#include <glib/gerror.h>
#include <dbus/dbus-glib.h>

G_BEGIN_DECLS

#ifndef DBUS_GLIB_CLIENT_WRAPPERS_net_sf_remuco_Server
#define DBUS_GLIB_CLIENT_WRAPPERS_net_sf_remuco_Server

static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
net_sf_remuco_Server_check (DBusGProxy *proxy, const guint IN_version, GError **error)

{
  return dbus_g_proxy_call (proxy, "Check", error, G_TYPE_UINT, IN_version, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*net_sf_remuco_Server_check_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
net_sf_remuco_Server_check_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(net_sf_remuco_Server_check_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
net_sf_remuco_Server_check_async (DBusGProxy *proxy, const guint IN_version, net_sf_remuco_Server_check_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "Check", net_sf_remuco_Server_check_async_callback, stuff, g_free, G_TYPE_UINT, IN_version, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
net_sf_remuco_Server_hello (DBusGProxy *proxy, const char * IN_player, const guint IN_flags, const guint IN_rating, GError **error)

{
  return dbus_g_proxy_call (proxy, "Hello", error, G_TYPE_STRING, IN_player, G_TYPE_UINT, IN_flags, G_TYPE_UINT, IN_rating, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*net_sf_remuco_Server_hello_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
net_sf_remuco_Server_hello_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(net_sf_remuco_Server_hello_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
net_sf_remuco_Server_hello_async (DBusGProxy *proxy, const char * IN_player, const guint IN_flags, const guint IN_rating, net_sf_remuco_Server_hello_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "Hello", net_sf_remuco_Server_hello_async_callback, stuff, g_free, G_TYPE_STRING, IN_player, G_TYPE_UINT, IN_flags, G_TYPE_UINT, IN_rating, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
net_sf_remuco_Server_update_state (DBusGProxy *proxy, const char * IN_player, const guint IN_playback, const guint IN_volume, const gboolean IN_repeat, const gboolean IN_shuffle, const guint IN_position, const gboolean IN_queue, GError **error)

{
  return dbus_g_proxy_call (proxy, "UpdateState", error, G_TYPE_STRING, IN_player, G_TYPE_UINT, IN_playback, G_TYPE_UINT, IN_volume, G_TYPE_BOOLEAN, IN_repeat, G_TYPE_BOOLEAN, IN_shuffle, G_TYPE_UINT, IN_position, G_TYPE_BOOLEAN, IN_queue, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*net_sf_remuco_Server_update_state_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
net_sf_remuco_Server_update_state_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(net_sf_remuco_Server_update_state_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
net_sf_remuco_Server_update_state_async (DBusGProxy *proxy, const char * IN_player, const guint IN_playback, const guint IN_volume, const gboolean IN_repeat, const gboolean IN_shuffle, const guint IN_position, const gboolean IN_queue, net_sf_remuco_Server_update_state_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "UpdateState", net_sf_remuco_Server_update_state_async_callback, stuff, g_free, G_TYPE_STRING, IN_player, G_TYPE_UINT, IN_playback, G_TYPE_UINT, IN_volume, G_TYPE_BOOLEAN, IN_repeat, G_TYPE_BOOLEAN, IN_shuffle, G_TYPE_UINT, IN_position, G_TYPE_BOOLEAN, IN_queue, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
net_sf_remuco_Server_update_plob (DBusGProxy *proxy, const char * IN_player, const char * IN_id, const char * IN_img, const GHashTable* IN_meta, GError **error)

{
  return dbus_g_proxy_call (proxy, "UpdatePlob", error, G_TYPE_STRING, IN_player, G_TYPE_STRING, IN_id, G_TYPE_STRING, IN_img, dbus_g_type_get_map ("GHashTable", G_TYPE_STRING, G_TYPE_STRING), IN_meta, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*net_sf_remuco_Server_update_plob_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
net_sf_remuco_Server_update_plob_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(net_sf_remuco_Server_update_plob_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
net_sf_remuco_Server_update_plob_async (DBusGProxy *proxy, const char * IN_player, const char * IN_id, const char * IN_img, const GHashTable* IN_meta, net_sf_remuco_Server_update_plob_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "UpdatePlob", net_sf_remuco_Server_update_plob_async_callback, stuff, g_free, G_TYPE_STRING, IN_player, G_TYPE_STRING, IN_id, G_TYPE_STRING, IN_img, dbus_g_type_get_map ("GHashTable", G_TYPE_STRING, G_TYPE_STRING), IN_meta, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
net_sf_remuco_Server_update_playlist (DBusGProxy *proxy, const char * IN_player, const char ** IN_ids, const char ** IN_names, GError **error)

{
  return dbus_g_proxy_call (proxy, "UpdatePlaylist", error, G_TYPE_STRING, IN_player, G_TYPE_STRV, IN_ids, G_TYPE_STRV, IN_names, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*net_sf_remuco_Server_update_playlist_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
net_sf_remuco_Server_update_playlist_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(net_sf_remuco_Server_update_playlist_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
net_sf_remuco_Server_update_playlist_async (DBusGProxy *proxy, const char * IN_player, const char ** IN_ids, const char ** IN_names, net_sf_remuco_Server_update_playlist_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "UpdatePlaylist", net_sf_remuco_Server_update_playlist_async_callback, stuff, g_free, G_TYPE_STRING, IN_player, G_TYPE_STRV, IN_ids, G_TYPE_STRV, IN_names, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
net_sf_remuco_Server_update_queue (DBusGProxy *proxy, const char * IN_player, const char ** IN_ids, const char ** IN_names, GError **error)

{
  return dbus_g_proxy_call (proxy, "UpdateQueue", error, G_TYPE_STRING, IN_player, G_TYPE_STRV, IN_ids, G_TYPE_STRV, IN_names, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*net_sf_remuco_Server_update_queue_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
net_sf_remuco_Server_update_queue_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(net_sf_remuco_Server_update_queue_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
net_sf_remuco_Server_update_queue_async (DBusGProxy *proxy, const char * IN_player, const char ** IN_ids, const char ** IN_names, net_sf_remuco_Server_update_queue_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "UpdateQueue", net_sf_remuco_Server_update_queue_async_callback, stuff, g_free, G_TYPE_STRING, IN_player, G_TYPE_STRV, IN_ids, G_TYPE_STRV, IN_names, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
net_sf_remuco_Server_bye (DBusGProxy *proxy, const char * IN_player, GError **error)

{
  return dbus_g_proxy_call (proxy, "Bye", error, G_TYPE_STRING, IN_player, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*net_sf_remuco_Server_bye_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
net_sf_remuco_Server_bye_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(net_sf_remuco_Server_bye_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
net_sf_remuco_Server_bye_async (DBusGProxy *proxy, const char * IN_player, net_sf_remuco_Server_bye_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "Bye", net_sf_remuco_Server_bye_async_callback, stuff, g_free, G_TYPE_STRING, IN_player, G_TYPE_INVALID);
}
#endif /* defined DBUS_GLIB_CLIENT_WRAPPERS_net_sf_remuco_Server */

G_END_DECLS
