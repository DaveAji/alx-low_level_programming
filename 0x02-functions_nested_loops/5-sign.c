#include "main.h"

/**
 * print_sign - the sign of the number to be printed
 * @n: check for the int
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int a = 0;

	if (n > 0)
	{
	_putchar('+');
	a = 1;
	}
	else if (n == 0)
	{
	_putchar('0');
	a = 0;
	}
	else if (n < 0)
	{
	_putchar('-');
	a = -1;
	}
	return (a);
}
