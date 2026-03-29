#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the new string
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0;
	int f;
	int i = 0;
	int j = 0;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	arr = malloc((i + j + 1) * sizeof(*arr));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (f = 0; f < i; f++)
	{
		arr[f] = s1[f];
	}
	for (f = f; f < i + j; f++)
	{
		arr[f] = s2[x];
		x++;
	}
	arr[i + j] = '\0';
	return (arr);
}
