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
	int i, j, k, result = 0;

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (j = 1; j < argc; j++)
	{
		result += atoi(argv[j]);
	}
	printf("%d\n", result);
	return (0);
}
