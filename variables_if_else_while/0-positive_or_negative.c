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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/**
	 *seeing if adding a comment will get git to recognize that the file has
	 *been edited
	 */
	if (n>0)
	{
		printf("%d is positive\n",n);
	}
	else
	{
		if (n==0)
		{
			printf("%d is zero\n",n);
		}
		else
		{
			printf("%d is negative\n",n);
		}
	}
	return (0);
}
