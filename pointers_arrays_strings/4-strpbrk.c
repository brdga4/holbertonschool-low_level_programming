#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first occurrence in the string
 * @accept: of any of the bytes in the string accept
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept.
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int start = 0;

	while (s[start] != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (s[start] == accept[i])
			{
				return (&s[start]);
			}
			i++;
		}
		start++;
	}
	return (NULL);
}
