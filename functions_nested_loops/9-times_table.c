#include "main.h"
#include <stdio.h>

void times_table(void)
{
	int row;
	int a;
	int b;

	for (row = 0; row <= 9; row++)
	{
		for (a = 0; a <= 9; a++)
		{
			b = row * a;
			if (a == 9)
			{
				if ((b % 10) == b)
				{
					printf(" %d\n", b);
				}
				else
				{
					printf("%d\n", b);
				}
			}
			else
			{
				if ((b % 10) == b)
				{
					if (a == 0)
					{
						printf("%d, ", b);
					}
					else
					{
						printf(" %d, ", b);
					}
				}
				else
				{
					printf("%d, ", b);
				}
			}
		}
	}
}
