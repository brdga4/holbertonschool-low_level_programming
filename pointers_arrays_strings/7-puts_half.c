#include "main.h"

/**
 * puts_half - prints half the string
 * @str: the string
 */
void puts_half(char *str)
{
	int len = 0;
	int half;
	int i;

	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len % 2 == 1)
	{
		len++;
	}
	half = len / 2;

	for (i = half; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
