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
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		alpha++;
	}
	_putchar('\n');

	return (0);
}
