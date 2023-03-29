#include "main.h"

/**
* _strcat - concatenates two strings
* @dest - the output destination
* @src - the source of string to be concatenated
* Retuen: Returns the resulting string after being merged
*/
char	*_strcat(char *dest, char *src)
{
	int i, dlen, slen;

	dlen = _strlen (dest);
	slen = _strlen (src);
	for (i = 0; i <= slen; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	return (dest);
}

int	_strlen(char *str)
{
	int i, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
        	len++;
    	return (len);
}
