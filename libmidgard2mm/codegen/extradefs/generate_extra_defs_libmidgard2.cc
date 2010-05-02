/* Copyright (c) 2010  Joe Hacker <joe@example.com>
 *
 * This file is part of libmidgard2mm.
 *
 * libmidgard2mm is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 2.1 of the License,
 * or (at your option) any later version.
 *
 * libmidgard2mm is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <glibmm_generate_extra_defs/generate_extra_defs.h>
#include <midgard/midgard.h>
#include <iostream>

int main(int, char**)
{
  libmidgard2_init();

  std::cout << get_defs(MIDGARD_TYPE_OBJECT);

  return 0;
}
