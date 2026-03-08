#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: first occurrence in the string
 * @needle: finds the first occurrence of the substring needle
 *
 * Return: a pointer to the beginning of the located substring.
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int from = 0;
	int i;
	int start = 0;

	while (haystack[start] != '\0')
	{
		i = 0;
		from = 0;
		while (1)
		{
			if (haystack[start] == needle[i])
			{
				start++;
				i++;
				from++;
			}
			else
			{
				break;
			}
		}
		if (haystack[start] == '\0' && needle[i] == '\0')
		{
			return (haystack);
		}
		if (needle[i] == '\0')
		{
			return (&haystack[start] - from);
		}
		start = start - from + 1;
	}
	return (NULL);
}
