#include <stdio.h>
/**
 *main-  entrypoint
 *
 *Return: 0 (always success)
 */

int main(void)
{
	for (int alpha  = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
