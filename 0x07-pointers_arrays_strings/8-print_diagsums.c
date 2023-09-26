#include "main.h"
/**
 * print_diagsums - a function to print the sum of two diagonals of a matrix.
 * @a: pointer to the array
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - 1 - i];
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
