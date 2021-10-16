#include "vector.h"

#include <assert.h>

int main(void)
{
	vector v;
	vector_init(&v);

	vector_push(&v, 1);
	vector_push(&v, 2);
	vector_push(&v, 3);
	vector_push(&v, 4);
	vector_push(&v, 5);

	assert(vector_size(&v) == 5);
	assert(vector_get(&v, 3) == 4);

	int sum = 0;
	for (size_t i = 0; i < vector_size(&v); ++i)
		sum += vector_get(&v, i);

	assert(sum == 15);

	vector_free(&v);
}
