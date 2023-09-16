#include"main.h"
/**
 *print_number - prints an integer.
 */
void print_number(int n)
{
	if (n >= 0 && n < 10)
		_putchar(n + '0');
	else if (n >= 10 && n < 100)
	{
		_putchar(n % 
