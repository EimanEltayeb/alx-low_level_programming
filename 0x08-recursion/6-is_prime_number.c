#include "main.h"
/**
 * is_prime_number - a function to know if the number is prime
 * @n: input num
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int check;
	int x = n - 1;

	check = n % x;
	if (check == 0)
		return (0);
	else
		is_prime
