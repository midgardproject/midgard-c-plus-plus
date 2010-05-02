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

AUTOMAKE_OPTIONS = subdir-objects

check_PROGRAMS = example/example

local_includes = -I$(top_builddir)/libmidgard2 $(if $(srcdir:.=),-I$(top_srcdir)/libmidgard2)
local_libs = $(top_builddir)/libmidgard2/libmidgard2mm/liblibmidgard2mm-$(LIBMIDGARD2MM_API_VERSION).la

AM_CPPFLAGS = -I$(top_builddir) $(local_includes) $(GTHREAD_CFLAGS) $(LIBMIDGARD2MM_CFLAGS)
AM_CXXFLAGS = $(LIBMIDGARD2MM_WXXFLAGS)
LDADD = $(LIBMIDGARD2MM_LIBS) $(local_libs)

example_example_SOURCES = example/example.cc
