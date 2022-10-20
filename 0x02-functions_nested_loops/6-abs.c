#include "main.h"

/**
 * _abs - Function that prints the absolute value of an integer
 * @n: integer provided as a function parameter
 * Return: int
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}

	return (n);
}
