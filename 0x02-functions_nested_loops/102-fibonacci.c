#include<stdio.h>
/**
 * main - a function to print the Fibonacci numbers.
 * Return: 0
 */
int main(void)
{
	unsigned long i, j, sum;
	int x;

	i = 0;
	j = 1;
	for (x = 0; x < 50; x++)
	{
		sum = i + j;
		printf("%lu, ", sum);
		i = j;
		j = sum;
	}
	printf("\n");
	return (0);
}
