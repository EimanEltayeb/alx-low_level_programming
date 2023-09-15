#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: a program to tell the sign of the number
 *
 * Return: 0
 */
int main(int n)
{
	/*check if the number is more than zero*/
	if (n > 0)

		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
