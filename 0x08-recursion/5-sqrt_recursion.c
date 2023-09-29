#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural sqrt of a num
 * @n: input num
 * @x: sqrt
 * Return: result of function sqrt_rec
 */
int sqrt_rec(int n, int x);
int _sqrt_recursion(int n)
{
	return (sqrt_rec(n, 1));
}
/**
 * sqrt_rec - a upport function
 * @n: input number
 * @x: sqrt
 * Return: x or -1
 */
int sqrt_rec(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (sqrt_rec(n, x + 1));
	else
		return (-1);
}
