#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: input as a function parameter
 * Return: 1 if n is less that 0; 0 if n is equal
 * to 0 and -1 if n is less than 0.
 *
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
	_putchar('0');
	return (0);
}
