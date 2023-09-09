#include<stdio.h>
/*
 * main = Entry
 * Return = 0
 */
int main(void)
{
	int  i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i = i + 1;
	}
	return (0);
}
