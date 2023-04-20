#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * @array: int array
 * @size: size of the array
 * @action:a pointer to the function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array && size && action)
	{
		while (i++ < size)
		{
			action(array[i]);
		}
	}
}
