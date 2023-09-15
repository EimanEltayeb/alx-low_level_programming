#include"main.h"
/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: the input size of the tringle
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i<= size; i++)
	{
		j = 0;
		for (j = 0; j<= size; j++)
		{
			
			_putchar('#');
