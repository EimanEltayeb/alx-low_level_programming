#include<stdio.h>

/*
 * main - Entry function
 * Return = Always 0
 */
int main(void)
{
	/*variable dif*/
	char alpha;

	alpha = 'a';

	/*while loop*/
	while ('a' <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
