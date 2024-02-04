#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_last_digit- prints the last digit of a given number
 *@n: the number to be checked
 *
 *Return: 0
 */
int print_last_digit(int n)
{
	int n_last = n % 10;

	_putchar('0' + abs(n_last));
	return (abs(n_last));
}
