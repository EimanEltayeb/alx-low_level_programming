#include "main.h"
/**
 *_atoi - function that convert a string to an integer.
 * @s: input char
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0;
	double num = 0;
	int sign = 1;

	{
		while (s[i] != '\0')
		{
			if (s[i] >= 48 && s[i] <= 57)
				num = num * 10 + (s[i] - '0');
			else if (s[i] == '-')
				sign *= -1;
			if (num > 0 && s[i] == ' ')
				break;
			i++;
		}
		return (num * sign);
	}
	return (0);
}
