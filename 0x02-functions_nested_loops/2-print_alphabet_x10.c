#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print the alphabets in lower case
 *
 * Return: Return 0 always succesful
*/
void	print_alphabet(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
