#include "vector.h"

#include <stdlib.h>

enum {
	DEFAULT_INIT_CAPACITY = 8,
	DEFAULT_GROWTH_RATE = 2
};

vector* vector_init(vector* v, int elem_size)
{
	v->elem = malloc(DEFAULT_INIT_CAPACITY * elem_size);
	if (!v->elem)
		return NULL;

	v->size = 0;
	v->cap = DEFAULT_INIT_CAPACITY;
	//v->flags = 0;
	v->elem_size = elem_size;

	return v;
}

void vector_free(vector* v)
{
	free(v->elem);
	v->size = 0;
	v->cap = 0;
	//v->flags = 0;
	v->elem_size = 0;
}
