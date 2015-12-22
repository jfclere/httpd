# Copyright 2001-2015 The Apache Software Foundation or its licensors, as
# applicable.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# ====================================================================
#
# NMAKEhttpd.inc  Master HTTPD definitions.
#
# Originally contributed by Mladen Turk <mturk redhat.com>
#
# ====================================================================
#
BUILDLIB = $(PREFIX)\$(_LIB)
BUILDOUT = $(PREFIX)\bin
BUILDINC = $(PREFIX)\include
BUILDMOD = $(PREFIX)\modules
BUILDMAN = $(PREFIX)\manual
BUILDDOC = $(PREFIX)\htdocs
BUILDCFG = $(PREFIX)\conf
BUILDERR = $(PREFIX)\error
BUILDICO = $(PREFIX)\icons
BUILDCGI = $(PREFIX)\cgi-bin
BUILDLOG = $(PREFIX)\logs
BUILDINS = $(PREFIX)

LIBAPR   = libapr-1.lib
LIBAPU   = libaprutil-1.lib
LIBAPI   = libiconv-1.lib
APR      = apr-1.lib
APU      = aprutil-1.lib
API      = iconv-1.lib
LIBPCRE  = libpcre.lib
ZLIB     = zlib-1.lib
DB4      = db48.lib
LIBZLIB  = libzlib-1.lib
LIBHTTPD = libhttpd.lib
LIBICONV = libiconv-1.lib
LIBDB4   = libdb48.lib
LIBLUA   = liblua51.lib
LIBXML2  = libxml2.lib

!IF "$(TARGET)" != "LIB"
LFLAGS = $(LFLAGS) /version:2.4
!ENDIF

DISTSUBDIRS = \
	$(PREFIX)\include\arch\win32\~ \
	$(PREFIX)\$(_LIB)\~ \
	$(PREFIX)\bin\~ \
	$(PREFIX)\modules\~ \
	$(PREFIX)\manual\~ \
	$(PREFIX)\htdocs\~ \
	$(PREFIX)\icons\~ \
	$(PREFIX)\cgi-bin\~ \
	$(PREFIX)\logs\~ \
	$(PREFIX)\error\include\~ \
	$(PREFIX)\conf\extra\~ \
	$(PREFIX)\conf\default\extra\~
