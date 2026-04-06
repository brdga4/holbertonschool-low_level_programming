#include "main.h"
#include <stdlib.h>

/**
 * array_range - description
 * @min: description
 * @max: description
 *
 * Return: description
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;
	int total;

	if (min > max)
	{
		return (NULL);
	}
	total = max - min + 1;
	arr = malloc(total * sizeof(arr));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
