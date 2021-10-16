#include "vector_int.h"

#include <stdlib.h>
#include <string.h>

enum { growth_delta = 8 };

static size_t vector_reserve(vector* v)
{
    size_t new_cp = v->cp == 0 ? growth_delta : 2 * v->cp;
    int* new_elem = (int*)malloc(sizeof(int) * new_cp);

    if (!new_elem)
        return 0;

    if (v->sz)
        memcpy(new_elem, v->elem, sizeof(int) * v->sz);

    free(v->elem);
    v->elem = new_elem;
    v->cp = new_cp;
    return v->cp;
}

void vector_init(vector* v)
{
	v->sz = 0;
	v->cp = 0;
	v->elem = NULL;
}

void vector_free(vector* v)
{
    free(v->elem);
}

size_t vector_push(vector* v, int val)
{
    if ((v->sz == v->cp) && !(vector_reserve(v)))
        return 0;

    v->elem[v->sz] = val;
    return ++v->sz;
}

int vector_get(vector* v, size_t index)
{
    return v->elem[index];
}

void vector_set(vector* v, size_t index, int val)
{
    v->elem[index] = val;
}
