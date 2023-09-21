#include"main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: x
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int x;

	while (s1[i] != 0 && s2[i] != 0)
	{
		x = s1[i] - s2[i];
		if (x == 0)
			i++;
		else
			break;
	}
	return (x);
}
