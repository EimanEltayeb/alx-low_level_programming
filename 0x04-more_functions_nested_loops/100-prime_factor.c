#include"main.h"
/**
 * main - Entry function
 * Return: 0
 */
int main(void)
{
	long int i;

	for (i = 612852475143; i >= 1; i--)
	{
		if (612852475143 % i == 0)
			break;
		printf("%lu", i);
	}
	return (0);
}
