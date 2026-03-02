#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
		if (j > 9)
		{
			/* Use #1: Prints the '1' for numbers 10-14 */
			_putchar((j / 10) + '0');
		}
		/* Use #2: Prints the last digit (0-9) */
		_putchar((j % 10) + '0');
		}
		/* Use #3: Prints the newline after each row */
		_putchar('\n');
	}
}
