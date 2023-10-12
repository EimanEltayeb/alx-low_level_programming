#include "variadic_functions.h"
/**
 * sum_them_all - a functionreturns the sum of all parameter.
 * @n: num of parameters.
 * Return: sum or 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, x;
	unsigned int i;
	va_list parameters;

	if (n == 0)
		return (0);

	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(parameters, int);
		sum += x;
	}
	va_end(parameters);

	return (sum);
}
