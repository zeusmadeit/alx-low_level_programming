#include "main.h"

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

void	main(void)
{
	int arr[] = {19,4,7,1,11,12,54,38};
	reverse_array(arr, 8);
	for (int i = 0; i < 8; i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');
}
