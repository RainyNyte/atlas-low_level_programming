#include <stdio.h>
/**
 *main-  entrypoint
 *
 *Return: 0 (always success)
 */

int main(void)
{
	int alpha;

	for (alpha  = 'a'; alpha <= 'z'; alpha++)
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
