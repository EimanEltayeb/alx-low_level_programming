#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function to print string.
 * @separator: separator
 * @n: num of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);
		if (x == NULL)
			x = "(nil)";
		if (i < (n - 1))
		{
			if (separator != NULL)
				printf("%s%s", x, separator);
			else
				printf("%s", x);
		}
		else
			printf("%s\n", x);
	}
}
