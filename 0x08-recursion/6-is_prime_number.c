#include "main.h"
/**
 * is_prime_number - a function to know if the number is prime
 * @n: input num
 * @x: support variable
 * Return: 0 or 1
 */
int prime_check(int n, int x);
int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
/**
 * prime_check - is a support function
 * @n: input number
 * @x: support variable
 * Return: 0 or 1
 */
int prime_check(int n, int x)
{
	if (x == n)
		return (1);
	else if (x < n && n % x != 0)
		return (prime_check(n, x + 1));
	else
		return (0);
}
