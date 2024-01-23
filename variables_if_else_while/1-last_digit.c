#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main- entrypoint
 *
 *Return: 0(always success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 *program will print the last digit of n
	 */
	last = n % 10;
	printf("Last digit of %d ", n);
	printf("is %d ", last);
	if (last > 5)
	{
		printf("and is greater than 5\n");
	}
	else
	{
		if (last == 0)
		{
			printf("and is 0\n");
		}
		else
		{
			printf("and is less than 6 and not 0\n");
		}
	}
	return (0);
}
