#include <stdio.h>
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
		if ( *argv[i] < 47 || *argv[i] > 57)
		{
			printf("Eror\n");
			return (1);
		}
	}
	if (argc == 1)
	printf("0\n");
	for (j = 1; j < argc; j++)
	{
			if (argv[i] > 0)
			{
				result += argv[i];
			}
	}
	printf("%d\n", result);
	return (0);
}
