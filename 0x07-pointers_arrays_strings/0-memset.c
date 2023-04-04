#include "main.h"

/**
 * _memset - sets or fills the block of memory with given argument
 * @s: pointer to memory area
 * @b: character to fill memory with
 * @n: integer
 * Return: Returns a pointer to the memory area
*/

char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
