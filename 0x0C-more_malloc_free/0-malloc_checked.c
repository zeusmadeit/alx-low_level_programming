#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocates memory using malloc
* @b: integer
*/
void	*malloc_checked(unsigned int b)
{
	void *mem;

	*mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
