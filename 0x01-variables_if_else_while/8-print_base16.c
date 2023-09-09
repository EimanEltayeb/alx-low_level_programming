#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: a program to print base 16 numbers
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char hex = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	while (hex < 'g')
	{
		putchar(hex);
		hex++;
	}

	putchar('\n');

	return (0);
}
