#include"main.h"
/**
 *_isupper - a function to check for uppercase character
 * @c: the alphabet to be checked
 *Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))

		return (1);
	else
		return (0);
}
