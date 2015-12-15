/* Z Kit C API - ABIs/generic/hash function.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2016 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_ABIs_generic_hash_function_H__
#define __Z_ABIs_generic_hash_function_H__

#include <Z/types/base.h>

void  (* ZHashFunctionInitialize) (void* context);

void  (* ZHashFunctionUpdate)	  (void* context,
				   void* block,
				   zsize block_size);

void  (* ZHashFunctionFinalize)	  (void* context);

void* (* ZHashFunctionResult)	  (void*  context,
				   zsize* result_size);

typedef struct {
	ZHashFunctionInitialize initialize;
	ZHashFunctionUpdate	update;
	ZHashFunctionFinalize	finalize;
	ZHashFunctionResult	result;
	zsize			context_size;
	zsize			result_size;
} ZHashFunctionABI;

#endif /* __Z_ABIs_generic_hash_function_H__ */