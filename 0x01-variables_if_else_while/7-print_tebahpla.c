#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: a program to print a specific text
 *
 * Return: 0
 */
int main(void)
{
	char xx = 'z';

	while (xx >= 'a')
	{
		putchar(xx);
		xx--;
	}
	putchar('\n');

	return (0);
}
