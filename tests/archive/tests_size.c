#include "vector.h"

#include <assert.h>

int main(void)
{
	vector v;
	vector_init(&v);

	assert(vector_size(&v) == 0);

	vector_free(&v);
}
