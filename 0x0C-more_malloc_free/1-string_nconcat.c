#include <stdlib.h>
#include "main.h"

/**
* _strlen - finds length of string
* @s: string
* Return: length
*/
int	_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* _nconcat - concatenates two strings, adds s2 to s1
* @s1: first string
* @s2; second string
* @len: current iteration
* @n: count
* Return: pointer to concatenated string
*/
char	*_nconcat(char *s1, char *s2, int len, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (s2 == NULL)
	{
		return (s1);
	}
	while (s2[i] != '\0')
	{
		if (n >= i)
		{
			s1[len] = s2[i];
		}
		i++;
	}
	return (s1);
}

/**
* string_nconcat - concatenates two strings.
* @s1: first string
* @s2; second string
* @n: count
* Return: pointer to a newly allocated space in memory
*/
char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	str = malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	return (_nconcat(_nconcat(str, s1, 0, _strlen(s1)), s2, _strlen(s1) + 1, n));
}
