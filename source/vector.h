#pragma once

#include <stddef.h>

typedef struct Vector vector;

struct Vector {
	size_t size;
	size_t cap;
	size_t elem_size;
	void* elem;
};

vector vector_create(size_t elem_size);
void vector_free(vector* v);

size_t vector_reserve(vector* v, size_t capacity);

/*
vector* vector_init(vector* v, int elem_size);

void* vector_get(vector* v, size_t index);

size_t vector_push(vector* v, void* item);
void* vector_place(vector* v);
*/

