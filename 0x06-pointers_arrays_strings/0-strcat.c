#include "main.h"

/**
* _strcat - concatenates two strings
* @dest - the output destination
* @src - the source of string to be concatenated
* Retuen: Returns the resulting string after being merged
*/
char	*_strcat(char *dest, char *src)
{
	int a = 0, i;

	while (dest[a] != '\0')
		a++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[a] = src[i];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
