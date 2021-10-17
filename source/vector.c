#include "vector.h"

#include <stdlib.h>
#include <string.h>

enum {
	DEFAULT_INIT_CAPACITY = 8,
	DEFAULT_GROWTH_RATE = 2
};

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 

vector vector_create(size_t elem_size)
{
	return (vector){
		.size = 0,
		.cap = 0,
		.elem_size = elem_size,
		.elem = NULL
	};
}

size_t vector_reserve(vector* v, size_t capacity)
{
	size_t new_cap;
	if (capacity && capacity > v->cap) {
		new_cap = capacity;
	} else {
		new_cap = v->cap ? DEFAULT_GROWTH_RATE * v->cap
			: DEFAULT_INIT_CAPACITY;
	}

	void* new_elem = malloc(v->elem_size * new_cap);
	if (!new_elem)
		return 0;

	if (v->size)
		memcpy(new_elem, v->elem, v->elem_size * v->size);

	free(v->elem);
	v->elem = new_elem;
	v->cap = new_cap;
	return v->cap;
}

void vector_free(vector* v)
	// Leaving elem_size. A vector of a type stays a vector of that type.
{
	free(v->elem);
	v->size = 0;
	v->cap = 0;
	v->elem = NULL;
}

