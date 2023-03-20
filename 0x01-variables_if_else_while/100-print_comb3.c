#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Return 0 Success
 */

int main(void)
{
	int i;
	int j;

	i = '0';
	while (i < '9')
	{
		j = '1';
		while (j <= '9')
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i != '8' || (i == '8' &&  j != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
