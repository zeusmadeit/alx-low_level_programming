#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * @array: int array
 * @size: size of the array
 * @action:a pointer to the function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		int i = 0;

		while (i++ < size)
		{
			action(array++);
		}
	}
}
