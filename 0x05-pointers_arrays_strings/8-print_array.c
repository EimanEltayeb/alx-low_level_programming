#include"main.h"
/**
 * print_array - function that prints n elements of an array
 * @a: array pointer
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i, j;
	int size = 0;

	while (a[size] != 0)
		size++;
	if (n <= size)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", *(a + i));
			if (i < (n - 1))
				printf(", ");
			else
				printf("\n");
		}
	}
	else if (n <= 0)
		printf("\n");
	else
	{
		for (j = 0; j <= size; j++)
		{
			printf("%d", *(a + j));
			if (j < (size - 1))
				printf(", ");
			else
				printf("\n");
		}
	}
}

