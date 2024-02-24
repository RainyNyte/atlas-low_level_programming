#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Print the opcodes of a function
 * @num_bytes: The number of opcodes to print
 */

void print_opcodes(int num_bytes)
{
	unsigned char *ptr = (unsigned char *)&print_opcodes;

	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", *(ptr + i));
	}
	printf("\n");
}

/**
 * main - converts argv[1] to an int and stores it to num_bytes
 *then calls print_opcodes with num_bytes
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect, 2 if the
 * number of bytes is negative
 */

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes(num_bytes);
	return (0);
}
