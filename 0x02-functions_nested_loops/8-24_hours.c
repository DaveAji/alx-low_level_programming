#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * begining from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;

	for (i = 0; i < 24; i++)
	{
		for(j = 0; j < 60; j++)
		{
			if(i < 10)
			{
				_putchar('0' + i);
			}
			else
			{
				_putchar(i);
			}
			_putchar(':');
			if(j < 10)
			{
				_putchar('0' + j);	
			}
			else
			{
				_putchar(j);
			}
			_putchar('\n');
		}
	}
}
