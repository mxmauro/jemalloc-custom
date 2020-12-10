#ifndef _JEMALLOC_H
#define _JEMALLOC_H

#include <no_sal2.h>

//-----------------------------------------------------------

extern "C" {

void *je_malloc(_In_ size_t size);

void *je_calloc(_In_ size_t number, _In_ size_t size);

void *je_aligned_alloc(_In_ size_t alignment, _In_ size_t size);

void *je_realloc(_In_ void *ptr, _In_ size_t size);

void je_free(_In_ void *ptr);

size_t je_malloc_usable_size(_In_ void *ptr);

} //extern "C"

//-----------------------------------------------------------

#endif //_JEMALLOC_H
