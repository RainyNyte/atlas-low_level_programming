#include "main.h"
#include <stdio.h>

/**
 *jack_bauer- prints every minute of the day
 *
 *Return: 0
 */

void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			if (hour < 10)
			{
				if (min < 10)
				{
					printf("0%d:0%d\n",hour,min);
				}
				else
				{
					printf("0%d:%d\n",hour,min);
				}
			}
			else
			{
				if (min < 10)
				{
					printf("%d:0%d\n",hour,min);
				}
				else
				{
					printf("%d:%d\n",hour,min);
				}
			}
		}
	}
}
