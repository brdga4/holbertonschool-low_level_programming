#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints
 * the sum of the two diagonals of a square matrix of integers
 * @a: the square
 * @size: square size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + i];
	}
	printf("%d, ", sum);

	sum = 0;
	for (i = size - 1; i >= 0; i--)
	{
		sum = sum + a[i * size + (size - 1 - i)];
	}
	printf("%d\n", sum);
}
