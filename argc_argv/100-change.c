#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: argc
 * @argv: argv
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int num = atoi(argv[1]);
	int i = 0;
	int coins = 0;
	int arr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (num < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			coins = coins + num / arr[i];
			num = num % arr[i];
		}
		printf("%d\n", coins);
	}
	return (0);
}
