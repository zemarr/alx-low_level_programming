#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */

void _puts(char *str)
{
	while (*str)
		_patchar(*str++);

	_putchar('\n');
}
