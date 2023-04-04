#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: string
 * @c: character c
 * Return: Returns a pointer to the first occurrence of the character c
 */

char	*_strchr(char *s, char c)
{
	int i, j;

	j = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			j = i;
			break;
		}
	}
	if (j >= 0)
		return (s[j]);
	else
		return (NULL);
}
