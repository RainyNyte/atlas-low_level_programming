#include <stdio.h>

/**
 *main- entrypoint
 *
 *Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0)
		{
			if ((n % 5) == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Fizz ");
			}
		}
		else
		{
			if ((n % 5) == 0)
			{
				if (n == 100)
				{
					printf("Buzz\n");
				}
				else
				{
					printf("Buzz ");
				}
			}
			else
			{
				printf("%d ", n);
			}
		}
	}
	return (0);
}
