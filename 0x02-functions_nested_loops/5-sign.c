#include "main.h"

/**
 * prints + if n is greater than zero, 0 if n is zero, and - if n is less than zero.
 * Return: 1 or 0 or -1.
 */
int print_sign(int n)
{
	if (n  > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
}
