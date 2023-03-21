#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Return 0 always succesful
*/
void	print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar("\n");
	return (0);
}
