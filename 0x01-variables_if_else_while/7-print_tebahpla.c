#include <stdio.h>

/**
 * main - Entry point
 * Return: returns 0 Success
*/
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
