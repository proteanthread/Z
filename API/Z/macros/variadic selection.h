/* Z Kit - macros/variadic selection.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2015 Petr Kobalicek <kobalicek.petr@gmail.com>.
Copyright (C) 2006-2018 Manuel Sainz de Baranda y Goñi.

This library  is free software: you  can redistribute it and/or  modify it under
the terms  of the  GNU Lesser General  Public License as  published by  the Free
Software Foundation,  either version 3 of  the License, or (at  your option) any
later version.

This library is distributed in the hope  that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty  of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received  a copy of the GNU Lesser  General Public License along
with this library. If not, see <http://www.gnu.org/licenses/>. */

#ifndef _Z_macros_variadic_selection_H_
#define _Z_macros_variadic_selection_H_

#include <Z/inspection/language.h>

#if	!defined(Z_AVOID_VARIADIC_MACROS) && \
	(Z_LANGUAGE_HAS(C, VARIADIC_MACRO) || Z_LANGUAGE_HAS(CPP, C99_PREPROCESSOR))

#	include <Z/macros/pasting.h>

#	define Z_SELECT_0( _0,																			 ...) _0
#	define Z_SELECT_1( _0, _1,																		 ...) _1
#	define Z_SELECT_2( _0, _1, _2,																		 ...) _2
#	define Z_SELECT_3( _0, _1, _2, _3,																	 ...) _3
#	define Z_SELECT_4( _0, _1, _2, _3, _4,																	 ...) _4
#	define Z_SELECT_5( _0, _1, _2, _3, _4, _5,																 ...) _5
#	define Z_SELECT_6( _0, _1, _2, _3, _4, _5, _6,																 ...) _6
#	define Z_SELECT_7( _0, _1, _2, _3, _4, _5, _6, _7,															 ...) _7
#	define Z_SELECT_8( _0, _1, _2, _3, _4, _5, _6, _7, _8,															 ...) _8
#	define Z_SELECT_9( _0, _1, _2, _3, _4, _5, _6, _7, _8, _9,														 ...) _9
#	define Z_SELECT_10(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10,														 ...) _10
#	define Z_SELECT_11(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11,													 ...) _11
#	define Z_SELECT_12(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12,												 ...) _12
#	define Z_SELECT_13(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13,												 ...) _13
#	define Z_SELECT_14(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14,											 ...) _14
#	define Z_SELECT_15(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15,										 ...) _15
#	define Z_SELECT_16(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16,										 ...) _16
#	define Z_SELECT_17(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17,									 ...) _17
#	define Z_SELECT_18(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18,									 ...) _18
#	define Z_SELECT_19(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19,								 ...) _19
#	define Z_SELECT_20(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20,							 ...) _20
#	define Z_SELECT_21(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21,							 ...) _21
#	define Z_SELECT_22(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22,						 ...) _22
#	define Z_SELECT_23(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23,					 ...) _23
#	define Z_SELECT_24(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24,					 ...) _24
#	define Z_SELECT_25(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25,				 ...) _25
#	define Z_SELECT_26(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26,				 ...) _26
#	define Z_SELECT_27(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27,			 ...) _27
#	define Z_SELECT_28(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28,		 ...) _28
#	define Z_SELECT_29(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29,		 ...) _29
#	define Z_SELECT_30(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30,	 ...) _30
#	define Z_SELECT_31(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, ...) _31

#	define Z_SELECT(index, ...) Z_JOIN_2(Z_SELECT_, index)(__VA_ARGS__, Z_DUMMY)

#endif

#endif /* _Z_macros_variadic_selection_H_ */
