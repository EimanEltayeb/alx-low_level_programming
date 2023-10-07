#include "main.h"
/**
 * array_range - a function to create an array of integers
 * @min: min number
 * @max: max number
 * Return: array pointer or NULL
 */
int *array_range(int min, int max)
{
	int *s, i, j;

	if (min > max)
		return (NULL);
	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
	{
		s[j] = i;
	}
	return (s);
}
