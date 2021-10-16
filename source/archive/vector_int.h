#pragma once

#include <stddef.h>

typedef struct Vector_int vectori;

struct Vector_int {
	size_t sz;
	size_t cp;
	int* elem;
};

void vector_init(vector* v);
void vector_free(vector* v);

int vector_get(vector* v, size_t index);
void vector_set(vector* v, size_t index, int val);

size_t vector_push(vector* v, int item);

size_t vector_size(vector* v)
{
	return v->sz;
}

int* vector_data(vector* v)
{
	return v->elem;
}
