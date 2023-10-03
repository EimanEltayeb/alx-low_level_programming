#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers
 * @argc: num of arguments
 * @argv: arguments array
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i, j, result = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < 47 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
	}
	for (j = 1; j < argc; j++)
	{
		result += atoi(argv[j]);
	}
	printf("%d\n", result);
	return (0);
}
