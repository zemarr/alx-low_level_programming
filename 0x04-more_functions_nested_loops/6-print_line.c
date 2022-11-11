#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */

void print_line(int n)
{
	int line_length;

	if (n > 0)
	{
		for (line_length = 0; line_length < n; line_length++)
			_putchar('_');
	}
	_putchar('\n');
}
