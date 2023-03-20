#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: returns 0 Success
*/
int main(void)
{
	int n;
	int tmp;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	tmp = n % 10;
	if (tmp > 5)
		printf("Last digit of %d is %d and is greater than 5", n, tmp);
	else if (tmp == 0)
		printf("Last digit of %d is %d and is 0", n, tmp);
	else if (tmp < 6 && tmp != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, tmp);
	printf("\n");

	return (0);
}
