#include <stdio.h>
/**
 *main-  entrypoint
 *
 *Return: 0 (always success)
 */

int main(void)
{
	int alpha;

	for (alpha  = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
