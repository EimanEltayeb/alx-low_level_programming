#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
