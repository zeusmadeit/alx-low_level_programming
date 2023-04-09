#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array containing names of arguments in @argc
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc);
	return (0);
}
