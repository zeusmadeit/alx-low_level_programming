#include "main.h"

/**
* _strncat - concatenates two strings
* @dest : the output destination
* @src : the source of string to be concatenated
* @n : int parameter
* Retuen: Returns the resulting string after being merged
*/
char	*_strncat(char *dest, char *src, int n)
{
	int a = 0, i;

	while (dest[a] != '\0')
		a++;
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[a + i] = src[i];
	}
	dest[a + i] = '\0';
	return (dest);
}
