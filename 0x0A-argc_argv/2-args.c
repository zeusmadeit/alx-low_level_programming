#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array containing names of arguments in @argc
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i = 2;

	if (argc > 1)
		while (i <= argc)
		{
			printf("%s\n", argv[i - 1]);
			i++;
		}
	return (0);
}
