/* Z Kit C API - inspection/modules/compiler/template.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright © 2006-2017 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_inspection_modules_compiler_template_H__
#define __Z_inspection_modules_compiler_template_H__

#include <Z/keys/compiler.h>
#include <Z/macros/version.h>

/* MARK: - Identification */

/*#define Z_COMPILER*/
/*#define Z_COMPILER_STRING*/
/*#define Z_COMPILER_VERSION*/
/*#define Z_COMPILER_VERSION_STRING*/

/* MARK: - CPU */

/*#define Z_COMPILER_CPU_ARCHITECTURE*/

/* MARK: - CPU endianness */

/*#define Z_COMPIER_CPU_INTEGER_ENDIANNESS*/
/*#define Z_COMPIER_CPU_INTEGER_ENDIANNESS_8BIT*/
/*#define Z_COMPIER_CPU_INTEGER_ENDIANNESS_16BIT*/
/*#define Z_COMPIER_CPU_INTEGER_ENDIANNESS_32BIT*/
/*#define Z_COMPIER_CPU_INTEGER_ENDIANNESS_64BIT*/
/*#define Z_COMPIER_CPU_INTEGER_ENDIANNESS_128BIT*/

/* MARK: - Bit field order */

/*#define Z_COMPILER_BIT_FIELD_ORDER*/
/*#define Z_COMPILER_BIT_FIELD_ORDER_8BIT*/
/*#define Z_COMPILER_BIT_FIELD_ORDER_16BIT*/
/*#define Z_COMPILER_BIT_FIELD_ORDER_32BIT*/
/*#define Z_COMPILER_BIT_FIELD_ORDER_64BIT*/
/*#define Z_COMPILER_BIT_FIELD_ORDER_128BIT*/

/* MARK: - OS */

/*#define Z_COMPIER_OS*/

/* MARK: - Data model */

/*#define Z_COMPILER_DATA_MODEL*/

/* MARK: - K&R C support */

/*#define Z_COMPILER_C_HAS_TYPE_FLOAT*/
/*#define Z_COMPILER_C_HAS_TYPE_DOUBLE*/
/*#define Z_COMPILER_C_HAS_STORAGE_CLASS_AUTO*/
/*#define Z_COMPILER_C_HAS_STORAGE_CLASS_EXTERN*/
/*#define Z_COMPILER_C_HAS_STORAGE_CLASS_REGISTER*/
/*#define Z_COMPILER_C_HAS_STORAGE_CLASS_STATIC*/
/*#define Z_COMPILER_C_HAS_OPERATOR_SIZE_OF*/

/* MARK: - C89 support */

/*#define Z_COMPILER_C_HAS_ENUMERATION*/
/*#define Z_COMPILER_C_HAS_VOID_POINTER*/
/*#define Z_COMPILER_C_HAS_TYPE_LDOUBLE*/
/*#define Z_COMPILER_C_HAS_TYPE_QUALIFIER_CONSTANT*/
/*#define Z_COMPILER_C_HAS_TYPE_QUALIFIER_VOLATILE*/

/* MARK: - C90 support */

/* MARK: - C94 support */

/*#define Z_COMPILER_C_HAS_DIGRAPH*/

/* MARK: - C99 support */

/*#define Z_COMPILER_C_HAS_COMPOUND_LITERAL*/
/*#define Z_COMPILER_C_HAS_CPP_STYLE_COMMENT*/
/*#define Z_COMPILER_C_HAS_DESIGNATED_INITIALIZER*/
/*#define Z_COMPILER_C_HAS_FLEXIBLE_ARRAY_MEMBER*/
/*#define Z_COMPILER_C_HAS_INLINE_FUNCION*/
/*#define Z_COMPILER_C_HAS_MIXED_DECLARATIONS_AND_CODE*/
/*#define Z_COMPILER_C_HAS_PREPROCESSOR_ARITHMETIC_DONE_IN_MAXIMUM_INTEGER*/
/*#define Z_COMPILER_C_HAS_VARIADIC_MACRO*/
/*#define Z_COMPILER_C_HAS_VLA*/
/*#define Z_COMPILER_C_HAS_TYPE_ULLONG*/
/*#define Z_COMPILER_C_HAS_TYPE_LLONG*/
/*#define Z_COMPILER_C_HAS_TYPE_QUALIFIER_RESTRICT*/
/*#define Z_COMPILER_C_HAS_SPECIFIER_INLINE*/

/* MARK: - C11 support */

/*#define Z_COMPILER_C_HAS_ANONYMOUS_STRUCTURE*/
/*#define Z_COMPILER_C_HAS_ANONYMOUS_UNION*/
/*#define Z_COMPILER_C_HAS_ATOMIC_OPERATIONS*/
/*#define Z_COMPILER_C_HAS_GENERIC_SELECTION*/
/*#define Z_COMPILER_C_HAS_STATIC_ASSERTION*/
/*#define Z_COMPILER_C_HAS_TYPE_QUALIFIER_ATOMIC*/
/*#define Z_COMPILER_C_HAS_STORATE_CLASS_THREAD_LOCAL*/
/*#define Z_COMPILER_C_HAS_SPECIFIER_ATOMIC*/
/*#define Z_COMPILER_C_HAS_SPECIFIER_ALIGN_AS*/
/*#define Z_COMPILER_C_HAS_SPECIFIER_NO_RETURN*/
/*#define Z_COMPILER_C_HAS_OPERATOR_ALIGN_OF*/

/* MARK: - Apple C extensions support */

/*#define Z_COMPILER_C_HAS_CLOSURE*/

/* MARK: - C attributes */

/*#define Z_COMPILER_C_ATTRIBUTE_ALIAS*/
/*#define Z_COMPILER_C_ATTRIBUTE_API*/
/*#define Z_COMPILER_C_ATTRIBUTE_API_ALIAS*/
/*#define Z_COMPILER_C_ATTRIBUTE_API_EXPORT*/
/*#define Z_COMPILER_C_ATTRIBUTE_API_EXPORT_ALIAS*/
/*#define Z_COMPILER_C_ATTRIBUTE_API_WEAK_EXPORT*/
/*#define Z_COMPILER_C_ATTRIBUTE_INLINE*/
/*#define Z_COMPILER_C_ATTRIBUTE_NO_RETURN*/
/*#define Z_COMPILER_C_ATTRIBUTE_NULL_TERMINATED*/
/*#define Z_COMPILER_C_ATTRIBUTE_PRIVATE*/
/*#define Z_COMPILER_C_ATTRIBUTE_PUBLIC*/
/*#define Z_COMPILER_C_ATTRIBUTE_STRICT_SIZE_BEGIN*/
/*#define Z_COMPILER_C_ATTRIBUTE_STRICT_SIZE_END*/
/*#define Z_COMPILER_C_ATTRIBUTE_THREAD_LOCAL*/
/*#define Z_COMPILER_C_ATTRIBUTE_WEAK*/

/* MARK: - C++ support */

/*#define Z_COMPILER_CPP_HAS_TYPE_BOOLEAN*/

/* MARK: - C++11 support */

/*#define Z_COMPILER_CPP_HAS_C99_PREPROCESSOR*/
/*#define Z_COMPILER_CPP_HAS_EXPLICIT_CONVERSION*/
/*#define Z_COMPILER_CPP_HAS_EXPRESSION_SFINAE*/
/*#define Z_COMPILER_CPP_HAS_INHERITING_CONSTRUCTORS*/
/*#define Z_COMPILER_CPP_HAS_INITIALIZER_LIST*/
/*#define Z_COMPILER_CPP_HAS_LAMBDA*/
/*#define Z_COMPILER_CPP_HAS_NON_STATIC_DATA_MEMBER_INITIALIZER*/
/*#define Z_COMPILER_CPP_HAS_RANGE_BASED_FOR*/
/*#define Z_COMPILER_CPP_HAS_REFERENCE_QUALIFIED_NON_STATIC_MEMBER_FUNCTION*/
/*#define Z_COMPILER_CPP_HAS_RVALUE_REFERENCE*/
/*#define Z_COMPILER_CPP_HAS_STATIC_CONSTANT_DATA_MEMBER_INITIALIZER*/
/*#define Z_COMPILER_CPP_HAS_STRONGLY_TYPED_ENUMERATION */
/*#define Z_COMPILER_CPP_HAS_TEMPLATE_ALIAS*/
/*#define Z_COMPILER_CPP_HAS_TRAILING_RETURN_TYPE*/
/*#define Z_COMPILER_CPP_HAS_UNRESTRICTED_UNION*/
/*#define Z_COMPILER_CPP_HAS_VARIADIC_TEMPLATE*/
/*#define Z_COMPILER_CPP_HAS_VARIADIC_TEMPLATE_EXTENDED_PARAMETERS*/
/*#define Z_COMPILER_CPP_HAS_TYPE_ULLONG*/
/*#define Z_COMPILER_CPP_HAS_TYPE_LLONG*/
/*#define Z_COMPILER_CPP_HAS_SPECIFIER_ALIGN_AS*/
/*#define Z_COMPILER_CPP_HAS_SPECIFIER_AUTO*/
/*#define Z_COMPILER_CPP_HAS_SPECIFIER_CONSTANT_EXPRESSION*/
/*#define Z_COMPILER_CPP_HAS_SPECIFIER_DECLARED_TYPE*/
/*#define Z_COMPILER_CPP_HAS_SPECIFIER_DECLARED_TYPE_INCOMPLETE_RETURN*/
/*#define Z_COMPILER_CPP_HAS_SPECIFIER_NO_EXCEPTION*/
/*#define Z_COMPILER_CPP_HAS_OPERATOR_ALIGN_OF*/
/*#define Z_COMPILER_CPP_HAS_OPERATOR_NO_EXCEPTION*/
/*#define Z_COMPILER_CPP_HAS_LITERAL_NULL_POINTER*/

/* MARK: - C++14 support */

/*#define Z_COMPILER_CPP_HAS_BINARY_LITERAL*/
/*#define Z_COMPILER_CPP_HAS_RELAXED_CONSTANT_EXPRESSION_FUNCTION*/

/* MARK: - C++ attributes */

/*#define Z_COMPILER_CPP_ATTRIBUTE_INLINE_MEMBER*/

/* MARK: - Built-in constants */

/*#define Z_COMPILER_CONSTANT_FLOAT16_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT16_NAN*/

/*#define Z_COMPILER_CONSTANT_FLOAT24_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT24_NAN*/

/*#define Z_COMPILER_CONSTANT_FLOAT32_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT32_NAN*/

/*#define Z_COMPILER_CONSTANT_FLOAT48_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT48_NAN*/

/*#define Z_COMPILER_CONSTANT_FLOAT64_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT64_NAN*/

/*#define Z_COMPILER_CONSTANT_FLOAT72_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT72_NAN*/

/*#define Z_COMPILER_CONSTANT_FLOAT80_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT80_NAN*/

/*#define Z_COMPILER_CONSTANT_FLOAT96_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT96_NAN*/

/*#define Z_COMPILER_CONSTANT_FLOAT128_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT128_NAN*/

/*#define Z_COMPILER_CONSTANT_UCHAR_BITS*/
/*#define Z_COMPILER_CONSTANT_UCHAR_SIZE*/
/*#define Z_COMPILER_CONSTANT_UCHAR_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_USHORT_BITS*/
/*#define Z_COMPILER_CONSTANT_USHORT_SIZE*/
/*#define Z_COMPILER_CONSTANT_USHORT_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_UINT_BITS*/
/*#define Z_COMPILER_CONSTANT_UINT_SIZE*/
/*#define Z_COMPILER_CONSTANT_UINT_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_ULONG_BITS*/
/*#define Z_COMPILER_CONSTANT_ULONG_SIZE*/
/*#define Z_COMPILER_CONSTANT_ULONG_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_ULLONG_BITS*/
/*#define Z_COMPILER_CONSTANT_ULLONG_SIZE*/
/*#define Z_COMPILER_CONSTANT_ULLONG_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_CHAR_BITS*/
/*#define Z_COMPILER_CONSTANT_CHAR_SIZE*/
/*#define Z_COMPILER_CONSTANT_CHAR_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_CHAR_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_SHORT_BITS*/
/*#define Z_COMPILER_CONSTANT_SHORT_SIZE*/
/*#define Z_COMPILER_CONSTANT_SHORT_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_SHORT_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_INT_BITS*/
/*#define Z_COMPILER_CONSTANT_INT_SIZE*/
/*#define Z_COMPILER_CONSTANT_INT_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_INT_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_LONG_BITS*/
/*#define Z_COMPILER_CONSTANT_LONG_SIZE*/
/*#define Z_COMPILER_CONSTANT_LONG_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_LONG_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_LLONG_BITS*/
/*#define Z_COMPILER_CONSTANT_LLONG_SIZE*/
/*#define Z_COMPILER_CONSTANT_LLONG_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_LLONG_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_FLOAT_BITS*/
/*#define Z_COMPILER_CONSTANT_FLOAT_SIZE*/
/*#define Z_COMPILER_CONSTANT_FLOAT_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT_NAN*/

/*#define Z_COMPILER_CONSTANT_DOUBLE_BITS*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_SIZE*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_INFINITY*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_NAN*/

/*#define Z_COMPILER_CONSTANT_LDOUBLE_BITS*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_SIZE*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_INFINITY*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_NAN*/

/*#define Z_COMPILER_CONSTANT_SIZE_BITS*/
/*#define Z_COMPILER_CONSTANT_SIZE_SIZE*/

/*#define Z_COMPILER_CONSTANT_SSIZE_BITS*/
/*#define Z_COMPILER_CONSTANT_SSIZE_SIZE*/

/*#define Z_COMPILER_CONSTANT_POINTER_BITS*/
/*#define Z_COMPILER_CONSTANT_POINTER_SIZE*/

/* MARK: - Built-in types */

/*#define Z_COMPILER_TYPE_UINT8*/
/*#define Z_COMPILER_TYPE_UINT16*/
/*#define Z_COMPILER_TYPE_UINT32*/
/*#define Z_COMPILER_TYPE_UINT64*/
/*#define Z_COMPILER_TYPE_UINT128*/

/*#define Z_COMPILER_TYPE_INT8*/
/*#define Z_COMPILER_TYPE_INT16*/
/*#define Z_COMPILER_TYPE_INT32*/
/*#define Z_COMPILER_TYPE_INT64*/
/*#define Z_COMPILER_TYPE_INT128*/

/*#define Z_COMPILER_TYPE_FLOAT16*/
/*#define Z_COMPILER_TYPE_FLOAT24*/
/*#define Z_COMPILER_TYPE_FLOAT32*/
/*#define Z_COMPILER_TYPE_FLOAT48*/
/*#define Z_COMPILER_TYPE_FLOAT64*/
/*#define Z_COMPILER_TYPE_FLOAT72*/
/*#define Z_COMPILER_TYPE_FLOAT80*/
/*#define Z_COMPILER_TYPE_FLOAT96*/
/*#define Z_COMPILER_TYPE_FLOAT128*/

/*#define Z_COMPILER_TYPE_VAL*/

/* MARK: - Built-in literals */

/*#define Z_COMPILER_LITERAL_UINT8*/
/*#define Z_COMPILER_LITERAL_UINT16*/
/*#define Z_COMPILER_LITERAL_UINT32*/
/*#define Z_COMPILER_LITERAL_UINT64*/
/*#define Z_COMPILER_LITERAL_UINT128*/

/*#define Z_COMPILER_LITERAL_INT8*/
/*#define Z_COMPILER_LITERAL_INT16*/
/*#define Z_COMPILER_LITERAL_INT32*/
/*#define Z_COMPILER_LITERAL_INT64*/
/*#define Z_COMPILER_LITERAL_INT128*/

/*#define Z_COMPILER_LITERAL_FLOAT16*/
/*#define Z_COMPILER_LITERAL_FLOAT24*/
/*#define Z_COMPILER_LITERAL_FLOAT32*/
/*#define Z_COMPILER_LITERAL_FLOAT48*/
/*#define Z_COMPILER_LITERAL_FLOAT64*/
/*#define Z_COMPILER_LITERAL_FLOAT72*/
/*#define Z_COMPILER_LITERAL_FLOAT80*/
/*#define Z_COMPILER_LITERAL_FLOAT96*/
/*#define Z_COMPILER_LITERAL_FLOAT128*/

/* MARK: - Built-in macros: Struture */

/*#define Z_COMPILER_MACRO_OFFSET_OF*/

/* MARK: - Built-in macros: VAL */

/*#define Z_COMPILER_MACRO_VAL_INITIALIZE*/
/*#define Z_COMPILER_MACRO_VAL_FINALIZE*/
/*#define Z_COMPILER_MACRO_VAL_READ*/
/*#define Z_COMPILER_MACRO_VAL_COPY*/

/* MARK: - Built-in functions: Atomic operations */

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_XOR_THEN_GET*/

#endif /* __Z_inspection_modules_compiler_template_H__ */
