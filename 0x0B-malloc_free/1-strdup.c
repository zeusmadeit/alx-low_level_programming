#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory
* which contains a copy of the string given as a parameter.
* @str: string
* Return: Returns the new string
*/
char	*_strdup(char *str)
{
	int i, len;
	char *s;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		s[i] = str[i];
	return (s);
}
