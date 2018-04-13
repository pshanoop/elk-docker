/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Fluent Bit
 *  ==========
 *  Copyright (C) 2015 Treasure Data Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef FLB_INFO_H
#define FLB_INFO_H

#define FLB_SOURCE_DIR "/home/sanoob/projects/elk-docker/fluent-bit/fluent-bit-0.12.17"

/* General flags set by CMakeLists.txt */
#ifndef JSMN_PARENT_LINKS
#define JSMN_PARENT_LINKS
#endif
#ifndef JSMN_STRICT
#define JSMN_STRICT
#endif
#ifndef FLB_HAVE_TLS
#define FLB_HAVE_TLS
#endif
#ifndef FLB_HAVE_SQLDB
#define FLB_HAVE_SQLDB
#endif
#ifndef FLB_HAVE_FLUSH_LIBCO
#define FLB_HAVE_FLUSH_LIBCO
#endif
#ifndef FLB_HAVE_FORK
#define FLB_HAVE_FORK
#endif
#ifndef FLB_HAVE_TIMESPEC_GET
#define FLB_HAVE_TIMESPEC_GET
#endif
#ifndef FLB_HAVE_PROXY_GO
#define FLB_HAVE_PROXY_GO
#endif
#ifndef FLB_HAVE_REGEX
#define FLB_HAVE_REGEX
#endif
#ifndef FLB_HAVE_C_TLS
#define FLB_HAVE_C_TLS
#endif
#ifndef FLB_HAVE_SETJMP
#define FLB_HAVE_SETJMP
#endif
#ifndef FLB_HAVE_ACCEPT4
#define FLB_HAVE_ACCEPT4
#endif
#ifndef FLB_HAVE_INOTIFY
#define FLB_HAVE_INOTIFY
#endif


#define FLB_INFO_FLAGS " JSMN_PARENT_LINKS JSMN_STRICT FLB_HAVE_TLS FLB_HAVE_SQLDB FLB_HAVE_FLUSH_LIBCO FLB_HAVE_FORK FLB_HAVE_TIMESPEC_GET FLB_HAVE_PROXY_GO FLB_HAVE_REGEX FLB_HAVE_C_TLS FLB_HAVE_SETJMP FLB_HAVE_ACCEPT4 FLB_HAVE_INOTIFY"
#endif
