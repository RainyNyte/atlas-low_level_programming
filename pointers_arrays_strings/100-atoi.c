#include "main.h"

/**
 *_atoi- converts strings to integers
 *@s: the character to convert
 *
 *Return: the converted integer, or 0 if there are no numbers in the string
 */

int _atoi(char *s)
{

	int sign = 1;
	int result = 0;

	while (*s == ' ')
		s++;

	if (*s == '-')
	{
		sign *= -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
