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
	char Alpha = 'a';
	char Alphabit = 'A';

	while (Alpha <= 'z')
	{
		putchar(Alpha);
		Alpha++;
	}

	while (Alphabit <= 'Z')
	{
		putchar(Alphabit);
		Alphabit++;
	}

	putchar('\n');

	return (0);
}
