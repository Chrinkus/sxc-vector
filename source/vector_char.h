#pragma once

#include <stddef.h>

typedef struct vector_char vector_char;
struct vector_char {
	size_t sz;
	size_t cp;
	char** elem;
};

void vector_char_init(vector_char* v);
void vector_char_free(vector_char* v);

char* vector_char_get(vector_char* v, size_t index);

ssize_t vector_char_push(vector_char* v, const char* c); 

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// inline functions
size_t vector_char_size(vector_char* v)	{ return v->sz; }
