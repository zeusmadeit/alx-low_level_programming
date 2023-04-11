#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars 
 * initialized with a specific char
 * @size: unsigned int
 * @c: char
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char	*create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
