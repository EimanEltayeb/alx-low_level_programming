#include "main.h"
/**
 * factorial - a function that return the factorial of a number
 * @n: input number
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
