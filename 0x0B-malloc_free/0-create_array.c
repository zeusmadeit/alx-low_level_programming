#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: unsigned int
 * @c: char
 * Returns: Returns a pointer to the array, or NULL if it fails
 */
char	*create_array(unsigned int size, char c)
{
	int i;
	char *s;

	s = malloc(sizeof(char) * size + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
