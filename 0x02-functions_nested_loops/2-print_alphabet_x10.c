#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabets in lower case
 *
 * Return: Return 0 always succesful
*/
void	print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
