## Copyright (c) 2010  Joe Hacker <joe@example.com>
##
## This file is part of libmidgard2mm.
##
## libmidgard2mm is free software: you can redistribute it and/or modify it
## under the terms of the GNU Lesser General Public License as published
## by the Free Software Foundation, either version 2.1 of the License,
## or (at your option) any later version.
##
## libmidgard2mm is distributed in the hope that it will be useful, but
## WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
## See the GNU Lesser General Public License for more details.
##
## You should have received a copy of the GNU Lesser General Public License
## along with this program.  If not, see <http://www.gnu.org/licenses/>.

lib_LTLIBRARIES = liblibmidgard2mm-@LIBMIDGARD2MM_API_VERSION@.la

include $(srcdir)/../src/filelist.am
include $(srcdir)/filelist.am
include $(top_srcdir)/build/compile-binding.am

local_cppflags = $(binding_includes) $(binding_cppflags) -DLIBMIDGARD2MM_BUILD=1

AM_CPPFLAGS = $(local_cppflags) $(GTHREAD_CFLAGS) $(LIBMIDGARD2MM_CFLAGS)
AM_CXXFLAGS = $(LIBMIDGARD2MM_WXXFLAGS)

liblibmidgard2mm_@LIBMIDGARD2MM_API_VERSION@_la_SOURCES = $(binding_sources)
liblibmidgard2mm_@LIBMIDGARD2MM_API_VERSION@_la_LDFLAGS = -no-undefined -version-info $(LIBMIDGARD2MM_SO_VERSION)
liblibmidgard2mm_@LIBMIDGARD2MM_API_VERSION@_la_LIBADD  = $(LIBMIDGARD2MM_LIBS)
