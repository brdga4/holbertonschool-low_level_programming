#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL if nmemb/size is 0
 * or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total_size;

	/* 1. Check if either input is zero */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* 2. Calculate total bytes needed */
	total_size = nmemb * size;

	/* 3. Allocate memory using malloc */
	ptr = malloc(total_size);

	/* 4. Check if malloc failed */
	if (ptr == NULL)
		return (NULL);

	/* 5. Initialize memory to zero */
	/* We use a char pointer to fill memory byte by byte */
	for (i = 0; i < total_size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
