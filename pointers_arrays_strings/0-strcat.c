#include "main.h"
#include <string.h>

/**
 *_strcat- combines 2 strings
 *@dest: the string to be extended
 *@src: the string to be appended to dest
 *
 *Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
      	dest =  strcat(dest, src);
	return (dest);
}
