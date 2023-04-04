#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: string
 * @c: character c
 * Return: Returns a pointer to the first occurrence of the character c
 */

char	*_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (*s);
		}
		s++;
	}
	return (0);
}
