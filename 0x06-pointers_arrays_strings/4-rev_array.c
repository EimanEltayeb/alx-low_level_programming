#include "main.h"
/**
 * reverse_array - a function reverses the content of an array of integers.
 * @a: input str
 * @n: num of str elements
 */
void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i < ((n - 1) / 2); i++)
	{
		x = a[i];
		a[i] = a[(n - i - 1)];
		a[(n - i - 1)] = x;
	}
}
