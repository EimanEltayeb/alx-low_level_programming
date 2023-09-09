#include<stdio.h>

/*
 * main - Entry function
 * Return = 0
 */
int main(void)
{
	/*variable dif*/
	char alpha;

	alpha = 'a';

	/*while loop*/
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
