#include <stdlib.h>
#include <string.h>

#include "vector_char.h"

enum { growth_delta = 8 };

static ssize_t vector_char_reserve(vector_char* v)
{
	ssize_t new_cp = v->cp == 0 ? growth_delta : v->cp * 2;
	char** new_elem = (char**) malloc(sizeof(char*) * new_cp);

	if (!new_elem)
		return -1;

	if (v->sz)
		memcpy(new_elem, v->elem, sizeof(char*) * v->sz);

	vector_char_free(v);

	v->elem = new_elem;
	v->cp = new_cp;
	return v->cp;
}

void vector_char_init(vector_char* v)
{
	v->sz = 0;
	v->cp = 0;
	v->elem = NULL;
}

void vector_char_free(vector_char* v)
{
	for (size_t i = 0; i < v->sz; ++i)
		free(v->elem[i]);
	free(v->elem);
}

char* vector_char_get(vector_char* v, size_t index)
{
	return v->elem[index];
}

ssize_t vector_char_push(vector_char* v, const char* c)
{
	if ((v->sz == v->cp) && (vector_char_reserve(v)) == -1)
		return -1;

	char* cc = (char*) malloc(strlen(c) + 1);
	if (!cc)
		return -1;
	strcpy(cc, c);

	v->elem[v->sz] = cc;
	return ++v->sz;
}
