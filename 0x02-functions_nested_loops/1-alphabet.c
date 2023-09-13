#include"main.h"
/**
 * main - Entry point
 *
 * Description: a program to print alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
