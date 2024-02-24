#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - uses get_op_func to determine what op_func to perform
 *on it's arguments, then calls the correct op_func via the func pointer
 *and prints its result
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 or Error if argc != 4 or if argv[2] == 0 and is passed with / or %
 */

int main(int argc, char *argv[])
{
	int arg1;
	int arg2;
	int result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	o = *argv[2];
	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
