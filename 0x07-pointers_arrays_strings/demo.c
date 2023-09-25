#include <stdio.h>
int main()
{
	char i = 6;
	char *p;
	char **pr;

	p = &i;
	pr = &p;
	printf("size of i = %lu\n", sizeof(i));
	printf("*p = %c\n", *p);
	return(0);
}
