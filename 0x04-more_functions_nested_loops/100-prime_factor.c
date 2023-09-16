#include"main.h"
/**
 * main - Entry function
 * Return: 0
 */
int main(void)
{
	long int i;

	for (i = 612852475141; i >= 1; i--)
	{
		if (612852475143 % i == 0)
		{
			printf("%lu", i);
			break;
		}
		else
			continue;
	}
	printf("\n");
	return (0);
}
