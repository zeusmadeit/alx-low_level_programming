#include "main.h"
#include <stdlib.h>

/**
* _strlen - finds length of string
* @s: string
* Return: Returns length of string @s
*/
int	_strlen(char *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
* _concat - concatenates two strings
* @s1: first string
* @s2: second string
* @index: current offset to concatenate to
* Return: Returns the new string
*/
char	*_concat(char *s1, char *s2, int index)
{
	int i;

	i = 0;
	if (s2 == NULL)
		return (s1);
	while (s2[i] != '\0')
	{
		s1[index] = s2[i];
		index += 1;
		i++;
	}
	return (s1);
}

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: Returns the new string
*/
char	*str_concat(char *s1, char *s2)
{
	int i, len;
	char *str;

	len = _strlen(s1) + _strlen(s2) + 1;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	i = _strlen(s1) + 1;
	_concat(str, s1, 0);
	_concat(str, s2, i);
	return (str);
}
