#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated.
 * @old_size: Size, in bytes, of the allocated space for ptr.
 * @new_size: New size, in bytes of the new memory block.
 *
 * Return: Pointer to the newly allocated memory, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i, min_size;

	/* 1. If new_size is equal to zero, and ptr is not NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* 2. If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
		return (malloc(new_size));

	/* 3. If new_size == old_size, do nothing and return ptr */
	if (new_size == old_size)
		return (ptr);

	/* 4. Allocate the new memory block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* 5. Copy the contents from old block to new block */
	/* We cast to char* to copy byte by byte */
	old_ptr = (char *)ptr;

	/* Find the minimum of old_size and new_size to avoid out-of-bounds reads */
	if (old_size < new_size)
		min_size = old_size;
	else
		min_size = new_size;

	for (i = 0; i < min_size; i++)
	{
		new_ptr[i] = old_ptr[i];
	}

	/* 6. Free the old memory block */
	free(ptr);

	return (new_ptr);
}
