#include "main.h"
/**
 * _pow_recursion - a function that return the velue of x to teh power y
 * @x: base num
 * @y: power num
 * Return: x to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * (_pow_recursion(x, y - 1)));
}
