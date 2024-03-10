#include "main.h"

/**
 *binary_to_uint- converts binary strings to uints
 *@b: string of binary to convert to a uint
 *
 *Return:converted number, or 0 if b contains 1 or more characters that are not
 *1 or 0 or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL)
	{
		return (0);
	}

		result = 0;
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = result * 2 + (*b - '0');
		b++;
	}

	return (result);
}
