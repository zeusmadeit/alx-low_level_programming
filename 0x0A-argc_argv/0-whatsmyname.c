#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array containing names of arguments in @argc
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
