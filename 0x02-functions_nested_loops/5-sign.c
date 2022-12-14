#include "main.h"

/**
 * print_sign-checkthe sign of a number
 * @n: Number to check
 *
 * Return: 1-if n is greater than 0: 0-if equal and -1 if less
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
