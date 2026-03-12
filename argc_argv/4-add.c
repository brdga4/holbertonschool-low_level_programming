#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: argc
 * @argv: argv
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] > '9' || *argv[i] < '1')
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
