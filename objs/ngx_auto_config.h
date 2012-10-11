#define NGX_CONFIGURE " --with-cc=cl --with-cc-opt=-DFD_SETSIZE=1024 --builddir=objs --prefix= --add-module=ngx_devel_kit-0.2.17 --add-module=ngx_coolkit-0.2rc1 --add-module=set-misc-nginx-module-0.22rc8 --add-module=ngx_lua-0.5.14 --add-module=echo-nginx-module-0.41 --add-module=headers-more-nginx-module-0.18 --add-module=ngx_postgres-1.0rc1 --add-module=rds-json-nginx-module-0.12rc10 --with-pcre=objs/lib/pcre-8.31 --with-zlib=objs/lib/zlib-1.2.7 --with-openssl=objs/lib/openssl-1.0.1c --with-select_module --with-http_ssl_module"

#ifndef NGX_HAVE_AIO
#define NGX_HAVE_AIO  1
#endif


#ifndef NGX_HAVE_IOCP
#define NGX_HAVE_IOCP  1
#endif


#ifndef NGX_HAVE_NONALIGNED
#define NGX_HAVE_NONALIGNED  1
#endif


#ifndef NGX_CPU_CACHE_LINE
#define NGX_CPU_CACHE_LINE  32
#endif


#ifndef NGX_HAVE_SELECT
#define NGX_HAVE_SELECT  1
#endif


#ifndef NGX_HTTP_CACHE
#define NGX_HTTP_CACHE  1
#endif


#ifndef NGX_HTTP_GZIP
#define NGX_HTTP_GZIP  1
#endif


#ifndef NGX_HTTP_SSI
#define NGX_HTTP_SSI  1
#endif


#ifndef NGX_CRYPT
#define NGX_CRYPT  1
#endif


#ifndef NGX_HTTP_GEO
#define NGX_HTTP_GEO  1
#endif


#ifndef NGX_HTTP_SSL
#define NGX_HTTP_SSL  1
#endif


#ifndef NGX_HTTP_PROXY
#define NGX_HTTP_PROXY  1
#endif


#ifndef NDK
#define NDK  1
#endif


#ifndef NGX_COOLKIT_MODULE
#define NGX_COOLKIT_MODULE  1
#endif


#ifndef NGX_POSTGRES_LIBRARY_VERSION
#define NGX_POSTGRES_LIBRARY_VERSION  90104
#endif


#ifndef NGX_POSTGRES_MODULE
#define NGX_POSTGRES_MODULE  1
#endif


#ifndef NGX_PCRE
#define NGX_PCRE  1
#endif


#ifndef PCRE_STATIC
#define PCRE_STATIC  1
#endif


#ifndef NGX_OPENSSL
#define NGX_OPENSSL  1
#endif


#ifndef NGX_SSL
#define NGX_SSL  1
#endif


#ifndef NGX_HAVE_OPENSSL_MD5_H
#define NGX_HAVE_OPENSSL_MD5_H  1
#endif


#ifndef NGX_OPENSSL_MD5
#define NGX_OPENSSL_MD5  1
#endif


#ifndef NGX_HAVE_MD5
#define NGX_HAVE_MD5  1
#endif


#ifndef NGX_HAVE_OPENSSL_SHA1_H
#define NGX_HAVE_OPENSSL_SHA1_H  1
#endif


#ifndef NGX_HAVE_SHA1
#define NGX_HAVE_SHA1  1
#endif


#ifndef NGX_CONF_PREFIX
#define NGX_CONF_PREFIX  "conf/"
#endif


#ifndef NGX_SBIN_PATH
#define NGX_SBIN_PATH  ""
#endif


#ifndef NGX_CONF_PATH
#define NGX_CONF_PATH  "conf/nginx.conf"
#endif


#ifndef NGX_PID_PATH
#define NGX_PID_PATH  "logs/nginx.pid"
#endif


#ifndef NGX_LOCK_PATH
#define NGX_LOCK_PATH  "logs/nginx.lock"
#endif


#ifndef NGX_ERROR_LOG_PATH
#define NGX_ERROR_LOG_PATH  "logs/error.log"
#endif


#ifndef NGX_HTTP_LOG_PATH
#define NGX_HTTP_LOG_PATH  "logs/access.log"
#endif


#ifndef NGX_HTTP_CLIENT_TEMP_PATH
#define NGX_HTTP_CLIENT_TEMP_PATH  "client_body_temp"
#endif


#ifndef NGX_HTTP_PROXY_TEMP_PATH
#define NGX_HTTP_PROXY_TEMP_PATH  "proxy_temp"
#endif


#ifndef NGX_HTTP_FASTCGI_TEMP_PATH
#define NGX_HTTP_FASTCGI_TEMP_PATH  "fastcgi_temp"
#endif


#ifndef NGX_HTTP_UWSGI_TEMP_PATH
#define NGX_HTTP_UWSGI_TEMP_PATH  "uwsgi_temp"
#endif


#ifndef NGX_HTTP_SCGI_TEMP_PATH
#define NGX_HTTP_SCGI_TEMP_PATH  "scgi_temp"
#endif


#ifndef NGX_SUPPRESS_WARN
#define NGX_SUPPRESS_WARN  1
#endif


#ifndef NGX_SMP
#define NGX_SMP  1
#endif


#ifndef NGX_USER
#define NGX_USER  ""
#endif


#ifndef NGX_GROUP
#define NGX_GROUP  ""
#endif

