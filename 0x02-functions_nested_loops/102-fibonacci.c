#include<stdio.h>
/**
 * main - a function to print the Fibonacci numbers.
 * Return: 0
 */
int main(void)
{
	int i, j, x, sum;

	i = 1;
	j = 2;
	sum = i + j;
	for (x = 0; x < 50; x++)
	{
		printf("%d, ", i);
		j = sum;
		i = j - i;
	}
	printf("\n");
	return (0);
}
