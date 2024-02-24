#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add numbers
 * @a: first number to add
 * @b: second number to add
 *
 * Return: result of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract numbers
 * @a: first number to subtract
 * @b: second number to subtract
 *
 * Return: result  of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply numbers
 * @a: first number to multiply
 * @b: second number to multiply
 *
 *  Return: result of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide numbers
 * @a:  number to divide b by
 * @b:  number to be divided b a
 *
 *  Return: result of a / b or Error if b == 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - finds the remainder of dividing a by b
 * @a: number to divide b by
 * @b: number to be divided by a
 *
 * Return: result of a % b or Error if b == 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
