#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 *main- entrypoint
 *
 *Return: 0(always success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d is positive",n);
		else
		{
			if (n==0)
			{
				printf("%d is zero",n);
				else
				{
					printf("%D is negative",n);
				}
			}
		}
	}
	return (0);
}
