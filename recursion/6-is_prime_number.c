#include "main.h"

/**
 * is_prime_number - checks if number is prime
 * @n: the number
 *
 * Return: (1) if the input integer is a prime number, otherwise return (0)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_try(n, 2));
}

/**
 * is_prime_try - helper
 * @n: the number
 * @x: where we start
 * Return: (1) if the input integer is a prime number, otherwise return (0)
 */
int is_prime_try(int n, int x)
{
	if (n % x == 0)
	{
		return (0);
	}
	if (x * x > n)
	{
		return (1);
	}
	return (is_prime_try(n, x + 1));
}
