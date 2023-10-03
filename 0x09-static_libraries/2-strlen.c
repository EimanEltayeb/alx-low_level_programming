#include"main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: string pointer
 *Return: size
 */
int _strlen(char *s)
{
	int size = 0;

	while (s[size] != 0)
		size++;
	return (size);
}
