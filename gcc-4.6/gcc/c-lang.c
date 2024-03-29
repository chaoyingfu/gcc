/* Language-specific hook definitions for C front end.
   Copyright (C) 1991, 1995, 1997, 1998,
   1999, 2000, 2001, 2003, 2004, 2005, 2007, 2008, 2009, 2010
   Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */


#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "tree.h"
#include "c-tree.h"
#include "c-family/c-common.h"
#include "langhooks.h"
#include "langhooks-def.h"
#include "tree-inline.h"
#include "diagnostic-core.h"
#include "c-objc-common.h"
#include "c-family/c-pragma.h"

enum c_language_kind c_language = clk_c;

/* Lang hooks common to C and ObjC are declared in c-objc-common.h;
   consequently, there should be very few hooks below.  */

#undef LANG_HOOKS_NAME
#define LANG_HOOKS_NAME "GNU C"
#undef LANG_HOOKS_INIT
#define LANG_HOOKS_INIT c_objc_common_init

/* LIPO support.  */
#undef LANG_HOOKS_ADD_BUILT_IN_DECL
#define LANG_HOOKS_ADD_BUILT_IN_DECL c_add_built_in_decl
#undef LANG_HOOKS_SAVE_BUILT_IN_PRE
#define LANG_HOOKS_SAVE_BUILT_IN_PRE c_save_built_in_decl_pre_parsing
#undef LANG_HOOKS_RESTORE_BUILT_IN_PRE
#define LANG_HOOKS_RESTORE_BUILT_IN_PRE c_restore_built_in_decl_pre_parsing
#undef LANG_HOOKS_SAVE_BUILT_IN_POST
#define LANG_HOOKS_SAVE_BUILT_IN_POST c_save_built_in_decl_post_parsing
#undef LANG_HOOKS_RESTORE_BUILT_IN_POST
#define LANG_HOOKS_RESTORE_BUILT_IN_POST c_restore_built_in_decl_post_parsing
#undef LANG_HOOKS_HAS_GLOBAL_NAME
#define LANG_HOOKS_HAS_GLOBAL_NAME c_is_global_scope
#undef LANG_HOOKS_GET_LANG_DECL_SIZE
#define LANG_HOOKS_GET_LANG_DECL_SIZE c_get_lang_decl_size
#undef LANG_HOOKS_IS_GENERATED_TYPE
#define LANG_HOOKS_IS_GENERATED_TYPE c_is_compiler_generated_type
#undef LANG_HOOKS_CMP_LANG_TYPE
#define LANG_HOOKS_CMP_LANG_TYPE c_cmp_lang_type


/* Each front end provides its own lang hook initializer.  */
struct lang_hooks lang_hooks = LANG_HOOKS_INITIALIZER;

#include "gtype-c.h"
