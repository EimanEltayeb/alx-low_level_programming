#include<stdio.h>

/*
 *main = Entry
 *Return = 0
 */
int main(void);
{
	int i = 0;

	while (i < 10)
	{
		Putchar(i + '0');
		if (i < 9)
			putchar(", ");
		i++;
	}
	putchar('\n');

	return (0);
}
