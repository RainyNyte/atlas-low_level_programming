#include "main.h"

/**
*_strstr - locates a substring
*@haystack: pointer
*@needle: pointer
*
*Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *hay_ptr;
	char *hay_tmp;
	char *needle_tmp;

	if (*needle == '\0')
	{
		return (haystack);
	}
	hay_ptr = haystack;

	while (*hay_ptr)
	{
		hay_tmp = hay_ptr;
		needle_tmp = needle;

		while (*hay_tmp && *needle_tmp && *hay_tmp == *needle_tmp)
		{
			hay_tmp++;
			needle_tmp++;
		}

		if (*needle_tmp == '\0')
		{
			return (hay_ptr);
		}
		hay_ptr++;
	}
	return (0);
}
