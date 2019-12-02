#include "vector.h"

#include <assert.h>

int main(void)
{
	vector v;
	vector_init(&v);

	assert(vector_size(&v) == 0);

	vector_push(&v, 1);
	vector_push(&v, 1);
	vector_push(&v, 2);
	vector_push(&v, 3);
	vector_push(&v, 5);
	vector_push(&v, 8);

	assert(vector_size(&v) == 6);

	vector_free(&v);
}
