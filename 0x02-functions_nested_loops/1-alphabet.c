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
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar("\n");

	return (0);
}
