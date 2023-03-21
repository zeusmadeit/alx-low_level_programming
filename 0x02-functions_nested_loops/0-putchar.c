#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Return 0 always succesful
*/
int	main(void)
{
	int i;
	char s[8] = "_putchar";


	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	return(0);
}
