#include <stdio.h>
/**
 *main- entrypoint
 *
 *Return: 0 (always success
 */

int main(void)
{
	/**
	 *declare vairables to store the output of sizeof for each type we'll be
	 *checking
	 */
	int CHAR;
	int INT;
	int LONG;
	int LLONG;
	int FLOAT;

	/**
	 *set each of the previously delcared variables to the outputs from
	 *sizeof
	 */
	CHAR = sizeof(char);
	INT = sizeof(int);
	LONG = sizeof(long);
	LLONG = sizeof(long long);
	FLOAT = sizeof(float);

	/**
	 *prints "Size of" strings for each variable that we assigned a value to
	 */
	printf("Size of a char: %d byte(s)\n", CHAR);
	printf("Size of an int: %d byte(s)\n", INT);
	printf("Size of a long int: %d byte(s)\n", LONG);
	printf("Size of a long long int: %d byte(s)\n", LLONG);
	printf("Size of a float: %d byte(s)\n", FLOAT);

	return (0);
}
