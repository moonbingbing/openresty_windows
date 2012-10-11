OpenResty_windows
=========
OpenResty_windows is [OpenResty](http://openresty.org/)'s windows version.

The purpose of this project is to run openresty in the windows system as soon as possible.  through simple and crude modify some third-party modules in order to adapt to the windows system, however at the same time the modified codes can not be run in linux :( .I will try to submit patches.

__NOTE__: OpenResty_windows not include all modules in [OpenResty](http://openresty.org/).   
 Now it include: ngx_devel_kit, ngx_coolkit, set-misc-nginx, ngx_lua, echo-nginx, headers-more-nginx, ngx_postgres, rds-json-nginx.   
 You can modify configure cmd to add modules, and possibly need to modify the code ensure compile successfully.

*Welcome to pull requests.*

Download OpenResty_windows binary package
=========
You can go to the release directory, direct download the compiled package.  
Unzip and run :

    nginx.exe -c your_nginx.conf
Done!
Build prerequisites
=========
If you want to build it yourself, you can  refer to the following steps.    
Before you build Openresty on windows, I strongly suggest you to build nginx follow this article: [Building nginx on the Win32 Platform with Visual C](http://nginx.org/en/docs/howto_build_on_win32.html). You do not need to download the source code of nginx ,PCRE ,zlib or OpenSSL, all source codes are ready.
Build OpenResty
=========
1. __download this project__

2.   __start msys bash__
    *    start Your_Visual_Studio_Path\VC\vcvarsall.bat   
    *    run  C:\mingw\msys\1.0\msys.bat in the above command window
    *    cd to the project dir in the above command window

3. __set environment variables__
    *   export LUAJIT_LIB=LuaJIT-2.0.0-beta10/src/
    *   export LUAJIT_INC=LuaJIT-2.0.0-beta10/src/
    *   export LIBPQ_INC=ngx_postgres-1.0rc1/src/
    *   export LIBPQ_LIB=ngx_postgres-1.0rc1/src/lib/
    
4. __run configure script__    

        auto/configure --with-cc=cl --with-cc-opt=-DFD_SETSIZE=1024\
          --builddir=objs  --prefix= \
          --add-module=ngx_devel_kit-0.2.17 \
          --add-module=ngx_coolkit-0.2rc1 \
          --add-module=set-misc-nginx-module-0.22rc8 \
          --add-module=ngx_lua-0.5.14 \
          --add-module=echo-nginx-module-0.41 \
          --add-module=headers-more-nginx-module-0.18 \
          --add-module=ngx_postgres-1.0rc1 \
          --add-module=rds-json-nginx-module-0.12rc10 \
          --with-pcre=objs/lib/pcre-8.31 \
          --with-zlib=objs/lib/zlib-1.2.7 \
          --with-openssl=objs/lib/openssl-1.0.1c \
          --with-select_module --with-http_ssl_module

5. __make__   
  nmake
License
=========
(The MIT License)

Copyright (c) 2012 WenMing <moonbingbing@gmail.com>