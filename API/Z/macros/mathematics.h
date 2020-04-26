/* Z Kit - macros/mathematics.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//__/__| Kit
Copyright (C) 2006-2020 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_macros_mathematics_H
#define Z_macros_mathematics_H

#define Z_MAXIMUM(a, b) \
	((a) > (b) ? (a) : (b))

#define Z_MINIMUM(a, b) \
	((a) < (b) ? (a) : (b))

#define Z_ABSOLUTE(value) \
	((value) < 0 ? -(value) : (a))

#define Z_IS_POWER_OF_2(value) \
	!((value) & ((value) - 1))

#define Z_NEXT_MULTIPLE(value, base) \
	((value) + (base) - ((value) % (base)))

#define Z_PREVIOUS_MULTIPLE(value, base) \
	((((value) - 1) / (base)) * (base))

#endif /* Z_macros_mathematics_H */