#include "main.h"
/**
 * is_palindrome -  a function that checks if string is palindrome
 * @s: input string
 * Return: 1 or 0
 */
int strsize(char *s);
int check_pali(char *s, int size);
int is_palindrome(char *s)
{
	int size = strsize(s);

	return (check_pali(s, size));
}
/**
 * strsize: to find the string size
 * @s: input
 * Return: size
 */
int strsize(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + strsize(s + 1));
}
/**
 * check_pali - support function
 * @s: input string
 * @size: calculated size
 * Return: 0 or 1
 */
int check_pali(char *s, int size)
{
	if (*s == '\0')
		return (1);
	else if (*s == *(-s + size))
		return (check_pali(s + 1, size - 2);
	else
		return (0);
}
