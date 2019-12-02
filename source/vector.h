#pragma once

#include <stddef.h>

typedef struct Vector vector;

struct Vector {
	size_t sz;
	size_t cp;
	int* elem;
};

void vector_init(vector* v);
void vector_free(vector* v);

int vector_get(vector* v, size_t index);

size_t vector_size(vector* v);
size_t vector_push(vector* v, int item);
