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
	char xx = 'a';

	while (xx <= 'z')
	{
		if (xx != 'q' && xx != 'o')
		{
			putchar(xx);
		}
		xx++;
	}
	putchar('\n');
	return (0);
}
