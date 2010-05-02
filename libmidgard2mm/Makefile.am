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

ACLOCAL_AMFLAGS = -I build ${ACLOCAL_FLAGS}
DISTCHECK_CONFIGURE_FLAGS = --enable-warnings=fatal

if MAINTAINER_MODE
src_subdirs = codegen libmidgard2/src
else
src_subdirs =
endif
if ENABLE_DOCUMENTATION
doc_subdirs = doc
else
doc_subdirs =
endif
SUBDIRS = $(src_subdirs) libmidgard2/libmidgard2mm examples $(doc_subdirs)

libmidgard2mm_includedir = $(includedir)/$(LIBMIDGARD2MM_MODULE_NAME)
libmidgard2mm_include_HEADERS = libmidgard2/libmidgard2mm.h

libmidgard2mm_libincludedir = $(libdir)/$(LIBMIDGARD2MM_MODULE_NAME)/include
nodist_libmidgard2mm_libinclude_HEADERS = libmidgard2/libmidgard2mmconfig.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libmidgard2/$(LIBMIDGARD2MM_MODULE_NAME).pc

dist_noinst_SCRIPTS = autogen.sh

# Optional: auto-generate the ChangeLog file from the git log on make dist
#include $(top_srcdir)/build/dist-changelog.am
