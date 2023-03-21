#include <stdio.h>
#include "main.h"

/**
 * main - Print the alphabets in lower case
 *
 * Return: Return 0 always succesful
*/
void	print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
