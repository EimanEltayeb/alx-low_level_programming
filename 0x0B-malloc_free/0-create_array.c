#include "main.h"
/**
 *creat_array - a function to create an array of chars
 *@size: array size
 *@c: input c
 *Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		*s = c;
	}
	return (s);
}
