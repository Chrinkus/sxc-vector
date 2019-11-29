#include "vector.h"

void vector_init(vector* v)
{
	v->sz = 0;
	v->cp = 0;
	v->elem = NULL;
}
