#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int	largest_number(int a, int b, int c)
{
	int i, j, largest;
	int arr[] = {a, b, c};

	largest  = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 3; j++)
		{
			if (arr[j] > arr[i] && arr[j] > largest)
			{
				largest = arr[j];
			}
		}
	}
	return (largest);
}
