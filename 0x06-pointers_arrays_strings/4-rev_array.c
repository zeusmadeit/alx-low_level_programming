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
	int j;
	int tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
