/* Z Kit - inspection/language.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
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

#ifndef _Z_inspection_language_H_
#define _Z_inspection_language_H_

#include <Z/keys/language.h>
#include <Z/inspection/compiler.h>
#include <Z/inspection/C.h>

#if defined(__cplusplus) && (defined(__OBJC__) || defined(__OBJC2__))

#	include <Z/inspection/C++.h>
#	include <Z/inspection/Objective-C.h>

#	define Z_LANGUAGE Z_LANGUAGE_OBJECTIVE_CPP

#elif defined(__OBJC__) || defined(__OBJC2__)

#	include <Z/inspection/Objective-C.h>

#	define Z_LANGUAGE Z_LANGUAGE_OBJECTIVE_C

#elif defined(__cplusplus)

#	include <Z/inspection/C++.h>

#	define Z_LANGUAGE Z_LANGUAGE_CPP

#else
#	define Z_LANGUAGE Z_LANGUAGE_C
#endif

#define Z_LANGUAGE_INCLUDES(LANGUAGE) \
	((Z_LANGUAGE & Z_LANGUAGE_##LANGUAGE) == Z_LANGUAGE_##LANGUAGE)

#define Z_C_FLAG(FLAG) FLAG

#if Z_LANGUAGE_INCLUDES(CPP)
#	define Z_CPP_FLAG(FLAG) FLAG
#else
#	define Z_CPP_FLAG(FLAG) FALSE
#endif

#if Z_LANGUAGE_INCLUDES(OBJECTIVE_C)
#	define Z_OBJECTIVE_C_FLAG(FLAG) FLAG
#else
#	define Z_OBJECTIVE_C_FLAG(FLAG) FALSE
#endif

#if defined(Z_USE_LANGUAGE_STANDARD) || Z_COMPILER == Z_COMPILER_UNKNOWN

#	define Z_LANGUAGE_HAS(LANGUAGE, WHAT) \
 		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_##WHAT)

#	define Z_LANGUAGE_HAS_ATTRIBUTE(LANGUAGE, ATTRIBUTE) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_ATTRIBUTE_##ATTRIBUTE)

#	define Z_LANGUAGE_HAS_LITERAL(LANGUAGE, LITERAL) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_LITERAL_##LITERAL)

#	define Z_LANGUAGE_HAS_OPERATOR(LANGUAGE, OPERATOR) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_OPERATOR_##OPERATOR)

#	define Z_LANGUAGE_HAS_SPECIFIER(LANGUAGE, SPECIFIER) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_SPECIFIER_##SPECIFIER)

#	define Z_LANGUAGE_HAS_STORAGE_CLASS(LANGUAGE, STORAGE_CLASS) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_STORAGE_CLASS_##STORAGE_CLASS)

#	define Z_LANGUAGE_HAS_TYPE(LANGUAGE, TYPE) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_TYPE_##TYPE)

#	define Z_LANGUAGE_HAS_TYPE_QUALIFIER(LANGUAGE, TYPE_QUALIFIER) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_TYPE_QUALIFIER_##TYPE_QUALIFIER)

#	define Z_LANGUAGE_HAS_PREPROCESSOR_DIRECTIVE(LANGUAGE, PREPROCESSOR_DIRECTIVE) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_PREPROCESSOR_DIRECTIVE_##PREPROCESSOR_DIRECTIVE)

#	define Z_LANGUAGE_HAS_PREPROCESSOR_OPERATOR(LANGUAGE, PREPROCESSOR_OPERATOR) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_PREPROCESSOR_OPERATOR_##PREPROCESSOR_OPERATOR)

#elif defined(Z_USE_SUPPORTED_LANGUAGE_STANDARD)

#	define Z_LANGUAGE_HAS(LANGUAGE, WHAT)			   \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_##WHAT) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_##WHAT))

#	define Z_LANGUAGE_HAS_ATTRIBUTE(LANGUAGE, ATTRIBUTE)			  \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_ATTRIBUTE_##ATTRIBUTE) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_ATTRIBUTE_##ATTRIBUTE))

#	define Z_LANGUAGE_HAS_LITERAL(LANGUAGE, LITERAL)		      \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_LITERAL_##LITERAL) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_LITERAL_##LITERAL))

#	define Z_LANGUAGE_HAS_OPERATOR(LANGUAGE, OPERATOR)			\
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_OPERATOR_##OPERATOR) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_OPERATOR_##OPERATOR))

#	define Z_LANGUAGE_HAS_SPECIFIER(LANGUAGE, SPECIFIER)			  \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_SPECIFIER_##SPECIFIER) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_SPECIFIER_##SPECIFIER))

#	define Z_LANGUAGE_HAS_STORAGE_CLASS(LANGUAGE, STORAGE_CLASS)			  \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_STORAGE_CLASS_##STORAGE_CLASS) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_STORAGE_CLASS_##STORAGE_CLASS))

#	define Z_LANGUAGE_HAS_TYPE(LANGUAGE, TYPE)			\
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_TYPE_##TYPE) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_TYPE_##TYPE))

#	define Z_LANGUAGE_HAS_TYPE_QUALIFIER(LANGUAGE, TYPE_QUALIFIER)			    \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_TYPE_QUALIFIER_##TYPE_QUALIFIER) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_TYPE_QUALIFIER_##TYPE_QUALIFIER))

#	define Z_LANGUAGE_HAS_PREPROCESSOR_DIRECTIVE(LANGUAGE, PREPROCESSOR_DIRECTIVE) \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_PREPROCESSOR_DIRECTIVE_##PREPROCESSOR_DIRECTIVE) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_PREPROCESSOR_DIRECTIVE_##PREPROCESSOR_DIRECTIVE))

#	define Z_LANGUAGE_HAS_PREPROCESSOR_OPERATOR(LANGUAGE, PREPROCESSOR_OPERATOR) \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_PREPROCESSOR_OPERATOR_##PREPROCESSOR_OPERATOR) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_PREPROCESSOR_OPERATOR_##PREPROCESSOR_OPERATOR))

#else

#	define Z_LANGUAGE_HAS(LANGUAGE, WHAT) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_##WHAT)

#	define Z_LANGUAGE_HAS_ATTRIBUTE(LANGUAGE, ATTRIBUTE) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_ATTRIBUTE_##ATTRIBUTE)

#	define Z_LANGUAGE_HAS_LITERAL(LANGUAGE, LITERAL) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_LITERAL_##LITERAL)

#	define Z_LANGUAGE_HAS_OPERATOR(LANGUAGE, OPERATOR) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_OPERATOR_##OPERATOR)

#	define Z_LANGUAGE_HAS_SPECIFIER(LANGUAGE, SPECIFIER) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_SPECIFIER_##SPECIFIER)

#	define Z_LANGUAGE_HAS_STORAGE_CLASS(LANGUAGE, STORAGE_CLASS) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_STORAGE_CLASS_##STORAGE_CLASS)

#	define Z_LANGUAGE_HAS_TYPE(LANGUAGE, TYPE) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_TYPE_##TYPE)

#	define Z_LANGUAGE_HAS_TYPE_QUALIFIER(LANGUAGE, TYPE_QUALIFIER) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_TYPE_QUALIFIER_##TYPE_QUALIFIER)

#	define Z_LANGUAGE_HAS_PREPROCESSOR_DIRECTIVE(LANGUAGE, PREPROCESSOR_DIRECTIVE) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_PREPROCESSOR_DIRECTIVE_##PREPROCESSOR_DIRECTIVE)

#	define Z_LANGUAGE_HAS_PREPROCESSOR_OPERATOR(LANGUAGE, PREPROCESSOR_OPERATOR) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_PREPROCESSOR_OPERATOR_##PREPROCESSOR_OPERATOR)

#endif

#endif /* _Z_inspection_language_H_ */
