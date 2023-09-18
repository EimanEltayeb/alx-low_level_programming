#include"main.h"
#include<math.h>
/**
 * main - Entry function
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	double sq = sqrt(n);
	long maxf;
	long i;

	for (i = 1; i <= sq; i++)
	{
		if (n % i == 0)
			maxf = i;
	}
	printf("%lu\n", maxf);
	return (0);
}

