#include<stdio.h>
/**
 * main - print the sum of even valued fibonacci numbers
 * Return: 0
 */
int main(void)
{
	float i;
	unsigned long f1, f2, sum;

	f1 = 0;
	f2 = 1;

	while (1)
	{
		sum = f1 + f2;
		if (sum > 4000000)
			break;

		if ((sum % 2 == 0))
			i += sum;
		f1 = f2;
		f2 = sum;
	}
	printf("%f\n", i);
	return (0);
}
