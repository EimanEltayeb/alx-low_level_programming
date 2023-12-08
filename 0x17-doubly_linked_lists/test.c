#include <stdio.h>
int main(void)
{
	int x, y, z;

	x = 999;
	y = 999;
	while (x != 0 && y != 0)
	{
		z = x * y;
		if (z % 1000000 == z % 10)
		{
			if ( z % 100000 == z % 100)
			{
				if (z % 10000 == z% 1000)
				{
					printf("%d\n", z);
					break;
				}
			}
		}
		else
		{
			x - 1;
		}
	}
	printf("non");
	return (0);
}
