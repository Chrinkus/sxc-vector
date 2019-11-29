#include "vector.h"

#include <assert.h>

int main(void)
{
	vector v;
	vector_init(&v);

	assert(v.sz == 0);
	assert(v.cp == 0);
	assert(v.elem == NULL);
}
