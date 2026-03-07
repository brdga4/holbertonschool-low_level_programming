#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: the array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int tmp;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
