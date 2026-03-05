#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int destlen = 0;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}

	while (src[i] != '\0')
	{
		dest[destlen] = src[i];

		i++;
		destlen++;
	}

	dest[destlen] = '\0';

	return (dest);
}
