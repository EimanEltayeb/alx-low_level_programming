#include<stdio.h>
/**
 *main - Entry
 *
 *Description: a program to print numbers
 *
 *Return: 0
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}
