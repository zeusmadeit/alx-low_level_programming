#include <stdlib.h>
#include "main.h"

/**
 * _atoi - converts string to number
 * @str: string
 * Return: integer
 */
int _atoi(char* str)
{
	int i, res = 0;

    for (i = 0; str[i] != '\0'; ++i)
        res = res * 10 + str[i] - '0';
 
	return (res);
}

/**
 * error_exit - prints error with _putchar
 * Return: 98
 */
int error_exit(void)
{
	char *err;
	int i;

	err = "Error";
	for (i = 0; err[i] != '\0'; i++)
		_putchar(err[i]);
	_putchar('\n');
	exit(98);
}

/**
 * check_number - cheks for num
 * @str: string
 * Return: 0 or 1
 */
int check_number(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}

/**
 * multiply - initialize array whith 0 byte
 * @s1: string
 * @s2: string
 */
void multiply(char *s1, char *s2)
{
	int res;

	res = _atoi(s1) * _atoi(s2);
	while (res > 0)
	{
		_putchar(res % 10 + '0');
		res = res / 10;
	}
	_putchar('\n');
}

/**
 * main - entry point
 * @argc: num of arg
 * @argv: arg of array
 * Return: 0 or 98
 */
int main(int argc, char **argv)
{
	char *n1 = argv[1], *n2 = argv[2];

	if (argc != 3 || check_number(n1) || check_number(n2))
		error_exit();
	if (*n1 == '0' || *n2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multiply(n1, n2);
	return (0);
}
