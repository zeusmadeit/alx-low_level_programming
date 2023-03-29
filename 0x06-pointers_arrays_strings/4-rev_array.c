#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse array
 * @a : array of int
 * @n : array length
 */
void	reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	while (i <= n / 2)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;	
		i++;
	}
}
