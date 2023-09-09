#include<stdio.h>
/**
 * main - Entry
 *
 * Description: a program to print singl digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int  i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i = i + 1;
	}
	putchar('\n');

	return (0);
}
