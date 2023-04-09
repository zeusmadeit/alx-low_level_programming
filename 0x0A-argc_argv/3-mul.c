#include <stdio.h>
#include <string.h>

/**
 * main - multiplies two numbers
 * @argc: cmd arguments count
 * @argv: array of cmd arguments
 * Return: always 0
 */
int	main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	return (0);
}
