#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints @c to stdout
 * @c: character
 */
void	_putchar(char c)
{
	write(1, c, 1);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array containing names of arguments in @argc
 * Return: return 0
 */

int	main(int argc, char *argv[])
{
	int i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
