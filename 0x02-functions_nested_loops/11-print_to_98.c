#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98, followed by a new line.
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 * You are allowed to use the standard library
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
	if (i == 98)
	{
		_putchar(i + '0');
	}
	else
	{
	_putchar(i + '0');
	_putchar(',');
   	_putchar(' ');
	}
	}
	_putchar ('\n');

}
