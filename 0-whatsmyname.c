#include <stdio.h>

/**
 *main- entrypoint
 *@argc: argument count
 *@argv: arguments stored in an array
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
	return (0);
}
