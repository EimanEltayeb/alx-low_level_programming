#include<stdio.h>

/*
 *main = Entry
 *Return = 0
 */
int main(void)
{
	char xx = 'z';

	while (xx >= 'a')
	{
		putchar(xx);
		xx--;
	}
	putchar('\n');

	return (0);
}
