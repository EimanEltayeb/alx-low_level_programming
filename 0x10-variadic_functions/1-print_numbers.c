#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: the given string
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (i < (n - 1))
		{
			if (separator != NULL)
				printf("%d%s", x, separator);
			else
				printf("%d", x);
		}
		else
			printf("%d\n", x);
	}
	va_end(args);
}
