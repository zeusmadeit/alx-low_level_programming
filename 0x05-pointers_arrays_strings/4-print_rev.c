#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse
 * @s: string
*/
void print_rev(char *s)
{
	int i, j = 0;

	while (s[j] != '\0')
		j++;
	for (i = j - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
