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

AC_INIT([libmidgard2mm], [1.2.3], [https://bugzilla.gnome.org/enter_bug.cgi?product=libmidgard2mm],
        [libmidgard2mm], [http://www.gtkmm.org/])
AC_PREREQ([2.59])

AC_CONFIG_SRCDIR([libmidgard2/libmidgard2mm.h])
AC_CONFIG_AUX_DIR([build])
AC_CONFIG_MACRO_DIR([build])
AC_CONFIG_HEADERS([build/config.h libmidgard2/libmidgard2mmconfig.h])

AM_INIT_AUTOMAKE([1.9 -Wno-portability check-news dist-bzip2 no-define nostdinc tar-pax])
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES])
AM_MAINTAINER_MODE
AC_ARG_VAR([ACLOCAL_FLAGS], [aclocal flags, e.g. -I <macro dir>])

MM_PREREQ([0.9])
MM_INIT_MODULE([libmidgard2mm-1.0])

# http://www.gnu.org/software/libtool/manual/html_node/Updating-version-info.html
AC_SUBST([LIBMIDGARD2MM_SO_VERSION], [0:0:0])

AC_PROG_CXX
AC_DISABLE_STATIC
AC_LIBTOOL_WIN32_DLL
AC_PROG_LIBTOOL

AC_SUBST([LIBMIDGARD2MM_MODULES], ['libmidgard2-1.0 >= 1.2 glibmm-2.4 >= 2.16'])
PKG_CHECK_MODULES([LIBMIDGARD2MM], [$LIBMIDGARD2MM_MODULES])

MM_PKG_CONFIG_SUBST([GTHREAD_CFLAGS], [--cflags-only-other gthread-2.0])
MM_PKG_CONFIG_SUBST([GMMPROC_DIR], [--variable=gmmprocdir glibmm-2.4])

MM_ARG_ENABLE_DOCUMENTATION
MM_ARG_WITH_TAGFILE_DOC([libstdc++.tag], [mm-common-libstdc++])
MM_ARG_WITH_TAGFILE_DOC([libsigc++-2.0.tag], [sigc++-2.0])
MM_ARG_WITH_TAGFILE_DOC([glibmm-2.4.tag], [glibmm-2.4])

AC_LANG([C++])
MM_ARG_ENABLE_WARNINGS([LIBMIDGARD2MM_WXXFLAGS],
                       [-Wall],
                       [-pedantic -Wall -Wextra],
                       [G LIBMIDGARD2])

AC_CONFIG_FILES([Makefile
                 codegen/Makefile
                 libmidgard2/${LIBMIDGARD2MM_MODULE_NAME}.pc:libmidgard2/libmidgard2mm.pc.in
                 libmidgard2/${LIBMIDGARD2MM_MODULE_NAME}-uninstalled.pc:libmidgard2/libmidgard2mm-uninstalled.pc.in
                 libmidgard2/src/Makefile
                 libmidgard2/libmidgard2mm/Makefile
                 examples/Makefile
                 doc/Makefile
                 doc/reference/Doxyfile])
AC_OUTPUT
