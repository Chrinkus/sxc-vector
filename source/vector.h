#pragma once

#include <stddef.h>

typedef struct Vector vector;

struct Vector {
	size_t sz;
	size_t cp;
	int* elem;
};

void vector_init(vector* v);
