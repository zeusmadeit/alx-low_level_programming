#include "main.h"

/**
 * more_numbers - prints 0 to 14, 10 times
 */

void more_numbers(void)
{
	int i;
	char k;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (k = 0 ; k <= 14 ; k++)
		{
			if (k > 9)
				_putchar('1');
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
