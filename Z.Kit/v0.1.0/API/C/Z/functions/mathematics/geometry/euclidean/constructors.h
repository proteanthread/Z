/* Z Kit C API - functions/mathematics/geometry/euclidean/constructors.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2018 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_functions_mathematics_geometry_euclidean_constructors_H__
#define __Z_functions_mathematics_geometry_euclidean_constructors_H__

#include <Z/types/mathematics.h>

#if Z_LANGUAGE_HAS(C, COMPOUND_LITERAL)

#	define z_2d_line_sint8(a_x, a_y, b_x, b_y)				\
		((Z2DLineSInt8){						\
			z_2d_sint8(a_x, a_y),					\
			z_2d_sint8(b_x, b_y)					\
		})

#	define z_3d_line_sint8(a_x, a_y, a_z, b_x, b_y, b_z)			\
		((Z3DLineSInt8){						\
			z_3d_sint(a_x, a_y, a_z),				\
			z_3d_sint(b_x, b_y, b_z)				\
		})

#	define z_box_sint8(point_x, point_y, point_z, size_x, size_y, size_z)	\
		((ZBoxSInt8){							\
			z_3d_sint8(point_x, point_y, point_z),			\
			z_3d_sint8(size_x,  size_y,  size_z )			\
		})

#	define z_rectangle_sint8(point_x, point_y, size_x, size_y)		\
		((ZRectangleSInt8){						\
			z_2d_sint8(point_x, point_y),				\
			z_2d_sint8(size_x,  size_y )				\
		})

#	define z_2d_line_sint16(a_x, a_y, b_x, b_y)				\
		((Z2DLineSInt16){						\
			z_2d_sint16(a_x, a_y),					\
			z_2d_sint15(b_x, b_y)					\
		})

#	define z_3d_line_sint16(a_x, a_y, a_z, b_x, b_y, b_z)			\
		((Z3DLineSInt16){						\
			z_3d_sint16(a_x, a_y, a_z),				\
			z_3d_sint16(b_x, b_y, b_z)				\
		})

#	define z_box_sint16(point_x, point_y, point_z, size_x, size_y, size_z)	\
		((ZBoxSInt16){							\
			z_3d_sint16(point_x, point_y, point_z),			\
			z_3d_sint16(size_x,  size_y,  size_z )			\
		})

#	define z_rectangle_sint16(point_x, point_y, size_x, size_y)		\
		((ZRectangleSInt16){						\
			z_2d_sint16(point_x, point_y),				\
			z_2d_sint16(size_x,  size_y )				\
		})

#	define z_2d_line_sint32(a_x, a_y, b_x, b_y)				\
		((Z2DLineSInt32){						\
			z_2d_sint32(a_x, a_y),					\
			z_2d_sint32(b_x, b_y)					\
		})

#	define z_3d_line_sint32(a_x, a_y, a_z, b_x, b_y, b_z)			\
		((Z3DLineSInt32){						\
			z_3d_sint32(a_x, a_y, a_z),				\
			z_3d_sint32(b_x, b_y, b_z)				\
		})

#	define z_box_sint32(point_x, point_y, point_z, size_x, size_y, size_z)	\
		((ZBoxSInt32){							\
			z_3d_sint32(point_x, point_y, point_z),			\
			z_3d_sint32(size_x,  size_y,  size_z )			\
		})

#	define z_rectangle_sint32(point_x, point_y, size_x, size_y)		\
		((ZRectangleSInt32){						\
			z_2d_sint32(point_x, point_y),				\
			z_2d_sint32(size_x,  size_y )				\
		})

#	ifdef Z_SINT64

#		define z_2d_line_sint64(a_x, a_y, b_x, b_y)			       \
			((Z2DLineSInt64){					       \
				z_2d_sint64(a_x, a_y),				       \
				z_2d_sint64(b_x, b_y)				       \
			})

#		define z_3d_line_sint64(a_x, a_y, a_z, b_x, b_y, b_z)		       \
			((Z3DLineSInt64){					       \
				z_3d_sint64(a_x, a_y, a_z),			       \
				z_3d_sint64(b_x, b_y, b_z)			       \
			})

#		define z_box_sint64(point_x, point_y, point_z, size_x, size_y, size_z) \
			((ZBoxSInt64){						       \
				z_3d_sint64(point_x, point_y, point_z),		       \
				z_3d_sint64(size_x,  size_y,  size_z )		       \
			})

#		define z_rectangle_sint64(point_x, point_y, size_x, size_y)	       \
			((ZRectangleSInt64){					       \
				z_2d_sint64(point_x, point_y),			       \
				z_2d_sint64(size_x,  size_y )			       \
			})

#	endif

#	ifdef Z_SINT128

#		define z_2d_line_sint128(a_x, a_y, b_x, b_y)				\
			((Z2DLineSInt128){						\
				z_2d_sint128(a_x, a_y),					\
				z_2d_sint128(b_x, b_y)					\
			})

#		define z_3d_line_sint128(a_x, a_y, a_z, b_x, b_y, b_z)			\
			((Z3DLineSInt128){						\
				z_3d_sint128(a_x, a_y, a_z),				\
				z_3d_sint128(b_x, b_y, b_z)				\
			})

#		define z_box_sint128(point_x, point_y, point_z, size_x, size_y, size_z) \
			((ZBoxSInt128){							\
				z_3d_sint128(point_x, point_y, point_z),		\
				z_3d_sint128(size_x,  size_y,  size_z )			\
			})

#		define z_rectangle_sint128(point_x, point_y, size_x, size_y)		\
			((ZRectangleSInt128){						\
				z_2d_sint128(point_x, point_y),				\
				z_2d_sint128(size_x,  size_y )				\
			})

#	endif

#	ifdef Z_FLOAT16

#		define z_2d_line_float16(a_x, a_y, b_x, b_y)				\
			((Z2DLineFloat16){						\
				z_2d_float16(a_x, a_y),					\
				z_2d_float16(b_x, b_y)					\
			})

#		define z_3d_line_float16(a_x, a_y, a_z, b_x, b_y, b_z)			\
			((Z3DLineFloat16){						\
				z_3d_float16(a_x, a_y, a_z),				\
				z_3d_float16(b_x, b_y, b_z)				\
			})

#		define z_box_float16(point_x, point_y, point_z, size_x, size_y, size_z)	\
			((ZBoxFloat16){							\
				z_3d_float16(point_x, point_y, point_z),		\
				z_3d_float16(size_x,  size_y,  size_z )			\
			})

#		define z_circle_float16(point_x, point_y, radius)			\
			((ZCircleFloat16){						\
				z_2d_float16(point_x, point_y),				\
				(zfloat16)(radius)					\
			})

#		define z_rectangle_float16(point_x, point_y, size_x, size_y)		\
			((ZRectangleFloat16){						\
				z_2d_float16(point_x, point_y),				\
				z_2d_float16(size_x,  size_y )				\
			})

#		define z_sphere_float16(point_x, point_y, point_z, radius)		\
			((ZCircleFloat16){						\
				z_3d_float16(point_x, point_y, point_z),		\
				(zfloat16)(radius)					\
			})

#	endif

#	ifdef Z_FLOAT32

#		define z_2d_line_float32(a_x, a_y, b_x, b_y)				\
			((Z2DLineFloat32){						\
				z_2d_float32(a_x, a_y),					\
				z_2d_float32(b_x, b_y)					\
			})

#		define z_3d_line_float32(a_x, a_y, a_z, b_x, b_y, b_z)			\
			((Z3DLineFloat32){						\
				z_3d_float32(a_x, a_y, a_z),				\
				z_3d_float32(b_x, b_y, b_z)				\
			})

#		define z_box_float32(point_x, point_y, point_z, size_x, size_y, size_z)	\
			((ZBoxFloat32){							\
				z_3d_float32(point_x, point_y, point_z),		\
				z_3d_float32(size_x,  size_y,  size_z )			\
			})

#		define z_circle_float32(point_x, point_y, radius)			\
			((ZCircleFloat32){						\
				z_2d_float32(point_x, point_y),				\
				(zfloat32)(radius)					\
			})

#		define z_rectangle_float32(point_x, point_y, size_x, size_y)		\
			((ZRectangleFloat32){						\
				z_2d_float32(point_x, point_y),				\
				z_2d_float32(size_x,  size_y )				\
			})

#		define z_sphere_float32(point_x, point_y, point_z, radius)		\
			((ZCircleFloat32){						\
				z_3d_float32(point_x, point_y, point_z),		\
				(zfloat32)(radius)					\
			})

#	endif

#	ifdef Z_FLOAT64

#		define z_2d_line_float64(a_x, a_y, b_x, b_y)				\
			((Z2DLineFloat64){						\
				z_2d_float64(a_x, a_y),					\
				z_2d_float64(b_x, b_y)					\
			})

#		define z_3d_line_float64(a_x, a_y, a_z, b_x, b_y, b_z)			\
			((Z3DLineFloat64){						\
				z_3d_float64(a_x, a_y, a_z),				\
				z_3d_float64(b_x, b_y, b_z)				\
			})

#		define z_box_float64(point_x, point_y, point_z, size_x, size_y, size_z)	\
			((ZBoxFloat64){							\
				z_3d_float64(point_x, point_y, point_z),		\
				z_3d_float64(size_x,  size_y,  size_z )			\
			})

#		define z_circle_float64(point_x, point_y, radius)			\
			((ZCircleFloat64){						\
				z_2d_float64(point_x, point_y),				\
				(zfloat64)(radius)					\
			})

#		define z_rectangle_float64(point_x, point_y, size_x, size_y)		\
			((ZRectangleFloat64){						\
				z_2d_float64(point_x, point_y),				\
				z_2d_float64(size_x,  size_y )				\
			})

#		define z_sphere_float64(point_x, point_y, point_z, radius)		\
			((ZCircleFloat64){						\
				z_3d_float64(point_x, point_y, point_z),		\
				(zfloat64)(radius)					\
			})

#	endif

#	ifdef Z_FLOAT128

#		define z_2d_line_float128(a_x, a_y, b_x, b_y)				 \
			((Z2DLineFloat128){						 \
				z_2d_float128(a_x, a_y),				 \
				z_2d_float128(b_x, b_y)					 \
			})

#		define z_3d_line_float128(a_x, a_y, a_z, b_x, b_y, b_z)			 \
			((Z3DLineFloat128){						 \
				z_3d_float128(a_x, a_y, a_z),				 \
				z_3d_float128(b_x, b_y, b_z)				 \
			})

#		define z_box_float128(point_x, point_y, point_z, size_x, size_y, size_z) \
			((ZBoxFloat128){						 \
				z_3d_float128(point_x, point_y, point_z),		 \
				z_3d_float128(size_x,  size_y,	size_z )		 \
			})

#		define z_circle_float128(point_x, point_y, radius)			 \
			((ZCircleFloat128){						 \
				z_2d_float128(point_x, point_y),			 \
				(zfloat128)(radius)					 \
			})

#		define z_rectangle_float128(point_x, point_y, size_x, size_y)		 \
			((ZRectangleFloat128){						 \
				z_2d_float128(point_x, point_y),			 \
				z_2d_float128(size_x,  size_y )				 \
			})

#		define z_sphere_float128(point_x, point_y, point_z, radius)		 \
			((ZCircleFloat128){						 \
				z_3d_float128(point_x, point_y, point_z),		 \
				(zfloat128)(radius)					 \
			})

#	endif

#	ifdef Z_FLOAT80_X87

#		define z_2d_line_float80_x87(a_x, a_y, b_x, b_y)			    \
			((Z2DLineFloat80_x87){						    \
				z_2d_float80_x87(a_x, a_y),				    \
				z_2d_float80_x87(b_x, b_y)				    \
			})

#		define z_3d_line_float80_x87(a_x, a_y, a_z, b_x, b_y, b_z)		    \
			((Z3DLineFloat80_x87){						    \
				z_3d_float80_x87(a_x, a_y, a_z),			    \
				z_3d_float80_x87(b_x, b_y, b_z)				    \
			})

#		define z_box_float80_x87(point_x, point_y, point_z, size_x, size_y, size_z) \
			((ZBoxFloat80_x87){						    \
				z_3d_float80_x87(point_x, point_y, point_z),		    \
				z_3d_float80_x87(size_x,  size_y,  size_z )		    \
			})

#		define z_circle_float80_x87(point_x, point_y, radius)			    \
			((ZCircleFloat80_x87){						    \
				z_2d_float80_x87(point_x, point_y),			    \
				(zfloat80_x87)(radius)					    \
			})

#		define z_rectangle_float80_x87(point_x, point_y, size_x, size_y)	    \
			((ZRectangleFloat80_x87){					    \
				z_2d_float80_x87(point_x, point_y),			    \
				z_2d_float80_x87(size_x,  size_y )			    \
			})

#		define z_sphere_float80_x87(point_x, point_y, point_z, radius)		    \
			((ZCircleFloat80_x87){						    \
				z_3d_float80_x87(point_x, point_y, point_z),		    \
				(zfloat80_x87)(radius)					    \
		})

#	endif

#	ifdef Z_FLOAT96_X87

#		define z_2d_line_float96_x87(a_x, a_y, b_x, b_y)			    \
			((Z2DLineFloat96_x87){						    \
				z_2d_float96_x87(a_x, a_y),				    \
				z_2d_float96_x87(b_x, b_y)				    \
			})

#		define z_3d_line_float96_x87(a_x, a_y, a_z, b_x, b_y, b_z)		    \
			((Z3DLineFloat96_x87){						    \
				z_3d_float96_x87(a_x, a_y, a_z),			    \
				z_3d_float96_x87(b_x, b_y, b_z)				    \
			})

#		define z_box_float96_x87(point_x, point_y, point_z, size_x, size_y, size_z) \
			((ZBoxFloat96_x87){						    \
				z_3d_float96_x87(point_x, point_y, point_z),		    \
				z_3d_float96_x87(size_x,  size_y,  size_z )		    \
			})

#		define z_circle_float96_x87(point_x, point_y, radius)			    \
			((ZCircleFloat96_x87){						    \
				z_2d_float96_x87(point_x, point_y),			    \
				(zfloat96_x87)(radius)					    \
			})

#		define z_rectangle_float96_x87(point_x, point_y, size_x, size_y)	    \
			((ZRectangleFloat96_x87){					    \
				z_2d_float96_x87(point_x, point_y),			    \
				z_2d_float96_x87(size_x,  size_y )			    \
			})

#		define z_sphere_float96_x87(point_x, point_y, point_z, radius)		    \
			((ZCircleFloat96_x87){						    \
				z_3d_float96_x87(point_x, point_y, point_z),		    \
				(zfloat96_x87)(radius)					    \
		})

#	endif

#	ifdef Z_FLOAT128_X87

#		define z_2d_line_float128_x87(a_x, a_y, b_x, b_y)			     \
			((Z2DLineFloat128_x87){						     \
				z_2d_float128_x87(a_x, a_y),				     \
				z_2d_float128_x87(b_x, b_y)				     \
			})

#		define z_3d_line_float128_x87(a_x, a_y, a_z, b_x, b_y, b_z)		     \
			((Z3DLineFloat128_x87){						     \
				z_3d_float128_x87(a_x, a_y, a_z),			     \
				z_3d_float128_x87(b_x, b_y, b_z)			     \
			})

#		define z_box_float128_x87(point_x, point_y, point_z, size_x, size_y, size_z) \
			((ZBoxFloat128_x87){						     \
				z_3d_float128_x87(point_x, point_y, point_z),		     \
				z_3d_float128_x87(size_x,  size_y,  size_z )		     \
			})

#		define z_circle_float128_x87(point_x, point_y, radius)			     \
			((ZCircleFloat128_x87){						     \
				z_2d_float128_x87(point_x, point_y),			     \
				(zfloat128_x87)(radius)					     \
			})

#		define z_rectangle_float128_x87(point_x, point_y, size_x, size_y)	     \
			((ZRectangleFloat128_x87){					     \
				z_2d_float128_x87(point_x, point_y),			     \
				z_2d_float128_x87(size_x,  size_y )			     \
			})

#		define z_sphere_float128_x87(point_x, point_y, point_z, radius)		     \
			((ZCircleFloat128_x87){						     \
				z_3d_float128_x87(point_x, point_y, point_z),		     \
				(zfloat128_x87)(radius)					     \
		})

#	endif

#else

#	define Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_INTEGER(Type, type)		\
												\
												\
	Z_INLINE Z2DLine##Type z_2d_line_##type(						\
		z##type a_x,									\
		z##type a_y,									\
		z##type b_x,									\
		z##type b_y									\
	)											\
		{Z2DLine##Type object = {{a_x, a_y}, {b_x, b_y}}; return object;}		\
												\
												\
	Z_INLINE Z3DLine##Type z_3d_line_##type(						\
		z##type a_x,									\
		z##type a_y,									\
		z##type a_z,									\
		z##type b_x,									\
		z##type b_y,									\
		z##type b_z									\
	)											\
		{Z3DLine##Type object = {{a_x, a_y, a_z}, {b_x, b_y, b_z}}; return object;}	\
												\
												\
	Z_INLINE ZBox##Type z_box_##type(							\
		z##type x,									\
		z##type y,									\
		z##type z,									\
		z##type size_x,									\
		z##type size_y,									\
		z##type size_z									\
	)											\
		{ZBox##Type object = {{x, y, z}, {size_x, size_y, size_z}}; return object;}	\
												\
												\
	Z_INLINE ZRectangle##Type z_rectangle_##type(						\
		z##type x,									\
		z##type y,									\
		z##type size_x,									\
		z##type size_y									\
	)											\
		{ZRectangle##Type object = {{x, y}, {size_x, size_y}}; return object;}


#	define Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_REAL(Type, type)		\
												\
												\
	Z_INLINE ZCircle##Type z_circle_##type(z##type x, z##type y, z##type radius)		\
		{ZCircle##Type object = {{x, y}, radius}; return object;}			\
												\
												\
	Z_INLINE ZSphere##Type z_sphere_##type(z##type x, z##type y, z##type z, z##type radius)	\
		{ZSphere##Type object = {{x, y, z}, radius}; return object;}


	Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_INTEGER(SInt8,	 sint8 )
	Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_INTEGER(SInt16, sint16)
	Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_INTEGER(SInt32, sint32)

#	ifdef Z_SINT64
		Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_INTEGER(SInt64, sint64)
#	endif

#	ifdef Z_SINT128
		Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_INTEGER(SInt128, sint128)
#	endif

#	ifdef Z_FLOAT16
		Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_INTEGER(Float16, float16)
		Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_REAL	(Float16, float16)
#	endif

#	ifdef Z_FLOAT32
		Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_INTEGER(Float32, float32)
		Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_REAL	(Float32, float32)
#	endif

#	ifdef Z_FLOAT64
		Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_INTEGER(Float64, float64)
		Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_REAL	(Float64, float64)
#	endif

#	ifdef Z_FLOAT128
		Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_INTEGER(Float128, float128)
		Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_REAL	(Float128, float128)
#	endif

#	ifdef Z_FLOAT80_X87
		Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_INTEGER(Float80_x87, float80_x87)
		Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_REAL	(Float80_x87, float80_x87)
#	endif

#	ifdef Z_FLOAT96_X87
		Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_INTEGER(Float96_x87, float96_x87)
		Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_REAL	(Float96_x87, float96_x87)
#	endif

#	ifdef Z_FLOAT128_X87
		Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_INTEGER(Float128_x87, float128_x87)
		Z_IMPLEMENTATION_EUCLIDEAN_GEOMETRY_CONSTRUCTORS_REAL	(Float128_x87, float128_x87)
#	endif

#endif

#define z_aabb_sint8 z_3d_line_sint8
#define z_aabr_sint8 z_2d_line_sint8

#define z_2d_line_sint8_zero   z_2d_line_sint8	(0.0, 0.0, 0.0, 0.0)
#define z_3d_line_sint8_zero   z_3d_line_sint8	(0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#define z_aabb_sint8_zero      z_3d_line_sint8_zero
#define z_aabr_sint8_zero      z_2d_line_sint8_zero
#define z_box_sint8_zero       z_box_sint8	(0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#define z_rectangle_sint8_zero z_rectangle_sint8(0.0, 0.0, 0.0, 0.0)

#define z_aabb_sint16 z_3d_line_sint16
#define z_aabr_sint16 z_2d_line_sint16

#define z_2d_line_sint16_zero	z_2d_line_sint16  (0.0, 0.0, 0.0, 0.0)
#define z_3d_line_sint16_zero	z_3d_line_sint16  (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#define z_aabb_sint16_zero	z_3d_line_sint16_zero
#define z_aabr_sint16_zero	z_2d_line_sint16_zero
#define z_box_sint16_zero	z_box_sint16	  (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#define z_rectangle_sint16_zero z_rectangle_sint16(0.0, 0.0, 0.0, 0.0)

#define z_aabb_sint32 z_3d_line_sint32
#define z_aabr_sint32 z_2d_line_sint32

#define z_2d_line_sint32_zero	z_2d_line_sint32  (0.0, 0.0, 0.0, 0.0)
#define z_3d_line_sint32_zero	z_3d_line_sint32  (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#define z_aabb_sint32_zero	z_3d_line_sint32_zero
#define z_aabr_sint32_zero	z_2d_line_sint32_zero
#define z_box_sint32_zero	z_box_sint32	  (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#define z_rectangle_sint32_zero z_rectangle_sint32(0.0, 0.0, 0.0, 0.0)

#ifdef Z_SINT64

#	define z_aabb_sint64 z_3d_line_sint64
#	define z_aabr_sint64 z_2d_line_sint64

#	define z_2d_line_sint64_zero   z_2d_line_sint64	 (0.0, 0.0, 0.0, 0.0)
#	define z_3d_line_sint64_zero   z_3d_line_sint64	 (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_aabb_sint64_zero      z_3d_line_sint64_zero
#	define z_aabr_sint64_zero      z_2d_line_sint64_zero
#	define z_box_sint64_zero       z_box_sint64	 (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_rectangle_sint64_zero z_rectangle_sint64(0.0, 0.0, 0.0, 0.0)

#endif

#ifdef Z_SINT128

#	define z_aabb_sint128 z_3d_line_sint128
#	define z_aabr_sint128 z_2d_line_sint128

#	define z_2d_line_sint128_zero	z_2d_line_sint128  (0.0, 0.0, 0.0, 0.0)
#	define z_3d_line_sint128_zero	z_3d_line_sint128  (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_aabb_sint128_zero	z_3d_line_sint128_zero
#	define z_aabr_sint128_zero	z_2d_line_sint128_zero
#	define z_box_sint128_zero	z_box_sint128	   (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_rectangle_sint128_zero z_rectangle_sint128(0.0, 0.0, 0.0, 0.0)

#endif

#ifdef Z_FLOAT16

#	define z_aabb_float16 z_3d_line_float16
#	define z_aabr_float16 z_2d_line_float16

#	define z_2d_line_float16_zero	z_2d_line_float16  (0.0, 0.0, 0.0, 0.0)
#	define z_3d_line_float16_zero	z_3d_line_float16  (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_aabb_float16_zero	z_3d_line_float16_zero
#	define z_aabr_float16_zero	z_2d_line_float16_zero
#	define z_box_float16_zero	z_box_float16	   (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_circle_float16_zero	z_circle_float16   (0.0, 0.0, 0.0)
#	define z_rectangle_float16_zero	z_rectangle_float16(0.0, 0.0, 0.0, 0.0)
#	define z_sphere_float16_zero	z_sphere_float16   (0.0, 0.0, 0.0, 0.0)

#endif

#ifdef Z_FLOAT32

#	define z_aabb_float32 z_3d_line_float32
#	define z_aabr_float32 z_2d_line_float32

#	define z_2d_line_float32_zero	z_2d_line_float32  (0.0, 0.0, 0.0, 0.0)
#	define z_3d_line_float32_zero	z_3d_line_float32  (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_aabb_float32_zero	z_3d_line_float32_zero
#	define z_aabr_float32_zero	z_2d_line_float32_zero
#	define z_box_float32_zero	z_box_float32	   (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_circle_float32_zero	z_circle_float32   (0.0, 0.0, 0.0)
#	define z_rectangle_float32_zero	z_rectangle_float32(0.0, 0.0, 0.0, 0.0)
#	define z_sphere_float32_zero	z_sphere_float32   (0.0, 0.0, 0.0, 0.0)

#endif

#ifdef Z_FLOAT64

#	define z_aabb_float64 z_3d_line_float64
#	define z_aabr_float64 z_2d_line_float64

#	define z_2d_line_float64_zero	z_2d_line_float64  (0.0, 0.0, 0.0, 0.0)
#	define z_3d_line_float64_zero	z_3d_line_float64  (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_aabb_float64_zero	z_3d_line_float64_zero
#	define z_aabr_float64_zero	z_2d_line_float64_zero
#	define z_box_float64_zero	z_box_float64	   (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_circle_float64_zero	z_circle_float64   (0.0, 0.0, 0.0)
#	define z_rectangle_float64_zero	z_rectangle_float64(0.0, 0.0, 0.0, 0.0)
#	define z_sphere_float64_zero	z_sphere_float64   (0.0, 0.0, 0.0, 0.0)

#endif

#ifdef Z_FLOAT128

#	define z_aabb_float128 z_3d_line_float128
#	define z_aabr_float128 z_2d_line_float128

#	define z_2d_line_float128_zero	 z_2d_line_float128  (0.0, 0.0, 0.0, 0.0)
#	define z_3d_line_float128_zero	 z_3d_line_float128  (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_aabb_float128_zero	 z_3d_line_float128_zero
#	define z_aabr_float128_zero	 z_2d_line_float128_zero
#	define z_box_float128_zero	 z_box_float128	     (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_circle_float128_zero	 z_circle_float128   (0.0, 0.0, 0.0)
#	define z_rectangle_float128_zero z_rectangle_float128(0.0, 0.0, 0.0, 0.0)
#	define z_sphere_float128_zero	 z_sphere_float128   (0.0, 0.0, 0.0, 0.0)

#endif

#ifdef Z_FLOAT80_X87

#	define z_aabb_float80_x87 z_3d_line_float80_x87
#	define z_aabr_float80_x87 z_2d_line_float80_x87

#	define z_2d_line_float80_x87_zero   z_2d_line_float80_x87  (0.0, 0.0, 0.0, 0.0)
#	define z_3d_line_float80_x87_zero   z_3d_line_float80_x87  (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_aabb_float80_x87_zero	    z_3d_line_float80_x87_zero
#	define z_aabr_float80_x87_zero	    z_2d_line_float80_x87_zero
#	define z_box_float80_x87_zero	    z_box_float80_x87	   (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_circle_float80_x87_zero    z_circle_float80_x87   (0.0, 0.0, 0.0)
#	define z_rectangle_float80_x87_zero z_rectangle_float80_x87(0.0, 0.0, 0.0, 0.0)
#	define z_sphere_float80_x87_zero    z_sphere_float80_x87   (0.0, 0.0, 0.0, 0.0)

#endif

#ifdef Z_FLOAT96_X87

#	define z_aabb_float96_x87 z_3d_line_float96_x87
#	define z_aabr_float96_x87 z_2d_line_float96_x87

#	define z_2d_line_float96_x87_zero   z_2d_line_float96_x87  (0.0, 0.0, 0.0, 0.0)
#	define z_3d_line_float96_x87_zero   z_3d_line_float96_x87  (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_aabb_float96_x87_zero	    z_3d_line_float96_x87_zero
#	define z_aabr_float96_x87_zero	    z_2d_line_float96_x87_zero
#	define z_box_float96_x87_zero	    z_box_float96_x87	   (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_circle_float96_x87_zero    z_circle_float96_x87   (0.0, 0.0, 0.0)
#	define z_rectangle_float96_x87_zero z_rectangle_float96_x87(0.0, 0.0, 0.0, 0.0)
#	define z_sphere_float96_x87_zero    z_sphere_float96_x87   (0.0, 0.0, 0.0, 0.0)

#endif

#ifdef Z_FLOAT128_X87

#	define z_aabb_float128_x87 z_3d_line_float128_x87
#	define z_aabr_float128_x87 z_2d_line_float128_x87

#	define z_2d_line_float128_x87_zero   z_2d_line_float128_x87  (0.0, 0.0, 0.0, 0.0)
#	define z_3d_line_float128_x87_zero   z_3d_line_float128_x87  (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_aabb_float128_x87_zero	     z_3d_line_float128_x87_zero
#	define z_aabr_float128_x87_zero	     z_2d_line_float128_x87_zero
#	define z_box_float128_x87_zero	     z_box_float128_x87	     (0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
#	define z_circle_float128_x87_zero    z_circle_float128_x87   (0.0, 0.0, 0.0)
#	define z_rectangle_float128_x87_zero z_rectangle_float128_x87(0.0, 0.0, 0.0, 0.0)
#	define z_sphere_float128_x87_zero    z_sphere_float128_x87   (0.0, 0.0, 0.0, 0.0)

#endif

#define z_2d_line_type(	 TYPE) Z_INSERT_##TYPE##_fixed_type(z_2d_line_,	 )
#define z_3d_line_type(	 TYPE) Z_INSERT_##TYPE##_fixed_type(z_3d_line_,	 )
#define z_aabb_type(	 TYPE) Z_INSERT_##TYPE##_fixed_type(z_aabb_,	 )
#define z_aabr_type(	 TYPE) Z_INSERT_##TYPE##_fixed_type(z_aabr_,	 )
#define z_box_type(	 TYPE) Z_INSERT_##TYPE##_fixed_type(z_box_type,	 )
#define z_circle_type(	 TYPE) Z_INSERT_##TYPE##_fixed_type(z_circle_,	 )
#define z_rectangle_type(TYPE) Z_INSERT_##TYPE##_fixed_type(z_rectangle_,)
#define z_sphere_type(	 TYPE) Z_INSERT_##TYPE##_fixed_type(z_sphere_,	 )

#define z_2d_line_type_zero(  TYPE) Z_INSERT_##TYPE##_fixed_type(z_2d_line_,   _zero)
#define z_3d_line_type_zero(  TYPE) Z_INSERT_##TYPE##_fixed_type(z_3d_line_,   _zero)
#define z_aabb_type_zero(     TYPE) Z_INSERT_##TYPE##_fixed_type(z_aabb_,      _zero)
#define z_aabr_type_zero(     TYPE) Z_INSERT_##TYPE##_fixed_type(z_aabr_,      _zero)
#define z_box_type_zero(      TYPE) Z_INSERT_##TYPE##_fixed_type(z_box_,       _zero)
#define z_circle_type_zero(   TYPE) Z_INSERT_##TYPE##_fixed_type(z_circle_,    _zero)
#define z_rectangle_type_zero(TYPE) Z_INSERT_##TYPE##_fixed_type(z_rectangle_, _zero)
#define z_sphere_type_zero(   TYPE) Z_INSERT_##TYPE##_fixed_type(z_sphere_,    _zero)

/* MARK: - Default real type definitions */

#ifdef Z_REAL

#	define z_2d_line   z_2d_line_type  (REAL)
#	define z_3d_line   z_3d_line_type  (REAL)
#	define z_aabb	   z_3d_line
#	define z_aabr	   z_2d_line
#	define z_box	   z_box_type	   (REAL)
#	define z_circle	   z_circle_type   (REAL)
#	define z_rectangle z_rectangle_type(REAL)
#	define z_sphere	   z_sphere_type   (REAL)

#	define z_2d_line_zero	z_2d_line_type_zero  (REAL)
#	define z_3d_line_zero	z_3d_line_type_zero  (REAL)
#	define z_aabb_zero	z_3d_line_zero
#	define z_aabr_zero	z_2d_line_zero
#	define z_box_zero	z_box_type_zero	     (REAL)
#	define z_circle_zero	z_circle_type_zero   (REAL)
#	define z_rectangle_zero	z_rectangle_type_zero(REAL)
#	define z_sphere_zero	z_sphere_type_zero   (REAL)

#endif

#endif /* __Z_functions_mathematics_geometry_euclidean_constructors_H__ */
