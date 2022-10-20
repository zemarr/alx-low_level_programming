#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: is an integer recieved in the function as a parameter
 * Return: int
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
