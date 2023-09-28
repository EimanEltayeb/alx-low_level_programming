#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: input string
 * Return: int length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (1);
	return (i + _strlen_recursion(s + 1));
}
