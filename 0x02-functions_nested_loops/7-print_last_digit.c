#include "main.h"

/**
* print_last_digit - Prints the last digit of a number.
* @n: The number in question.
*
* Return: Value of the last digit.
*/
int print_last_digit(int n)
{
	int i;
	
	if (n < 0)
	{
		n = -(n);
	}
	
	if (n >= 0 && n <= 9)
	{
		i = n;
		_putchar(i);
	}
	else if (n >= 10)
	{
	       i =  n % 10;
	       _putchar(i);
	}
	return (i);
}
