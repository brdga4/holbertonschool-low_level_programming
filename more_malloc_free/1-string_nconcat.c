#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - description
 * @s1: description
 * @s2: d
 * @n: d
 *
 * Return: description
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *arr;
	unsigned int k = 0;
	unsigned int s = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
	{
		arr = malloc(i + j + 1);
		if (arr == NULL)
			return (NULL);
	}
	else
	{
		j = n;
		arr = malloc(i + j + 1);
		if (arr == NULL)
			return (NULL);
	}
	while (s1[k] != '\0')
	{
		arr[k] = s1[k];
		k++;
	}
	while (s < j)
	{
		arr[k] = s2[s];
		s++;
		k++;
	}
	arr[k] = '\0';
	return (arr);
}
