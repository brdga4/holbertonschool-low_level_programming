#include "main.h"

/**
 * string_toupper - changes string to uppercase
 * @s: the string
 *
 * Return: the new string
 */
char *string_toupper(char *s)
{
	int start = 0;
	int end = 0;

	while (s[end] != '\0')
	{
		end++;
	}
	end--;

	while (start <= end)
	{
		if (s[start] >= 'a' && s[start] <= 'z')
		{
			s[start] -= 32;
		}
		start++;
	}
	return (s);
}
