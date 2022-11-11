#include "main.h"

/**
 *  * print_triangle - Prints a triangle, using the character #.
 *  @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int hash, idx;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (idx = size - hash; idx > 0; index--)
				_putchar(' ');

			for (index = 0; index < hash; index++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
