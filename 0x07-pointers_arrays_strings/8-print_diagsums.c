#include "main.h"
/**
 * print_diagsums - a function to print the sum of two diagonals of a matrix.
 * @a: pointer to the array
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			sum1 += a[i][j];
			if (i + j + 1 == size)
			sum2 += a[i][j];
		}
	}
	printf("%d, %d", sum1, sum2);
}
