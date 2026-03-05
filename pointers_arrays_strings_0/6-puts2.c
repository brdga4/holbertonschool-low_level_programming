#include "main.h"

/**
 * puts2 - prints every other character
 * @str: the string
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (*(str + len) != '\0')
	{
		len++;
	}

	for (i = 0; i < len;)
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
