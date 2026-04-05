#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 * if malloc fails, the function causes normal process termination
 * with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (int)malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
