#include <stdio.h>
#include <stdlib.h>

/**
 *main- entrypoint
 *@argc- number of arguments
 *@argv- array of arguments
 *
 *Return: 1 if receiving less than 2 arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);
		int result = n1 * n2;

		printf("%d\n", result);
		return (0);
	}
}
