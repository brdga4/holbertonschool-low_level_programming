#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the natural square root, or -1 if none
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_try(n, 0));
}

/**
 * _sqrt_try - helper recursion to find sqrt
 * @n: the number
 * @guess: candidate square root
 * Return: square root if exists, -1 if none
 */
int _sqrt_try(int n, int guess)
{
	if (n < 0)
		return (-1);

	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (_sqrt_try(n, guess + 1));
}
