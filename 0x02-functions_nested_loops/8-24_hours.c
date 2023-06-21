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
		char str[100];
		char min[20];

			if(i < 10)
			{
				str = '0' + i;
			}
			else
			{
				str = i;
			}
			if(j < 10)
			{
				min = '0' + j;	
			}
			else
			{
				min = j;
			}
			_putchar(str + ':' + min);
			_putchar('\n');
		}
	}
}
