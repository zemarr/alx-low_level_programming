#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int num, multiplier, product;

	for (num = 0; num <= 9; num++)
	{
		putchar('0');

		for (multiplier = 1; multiplier <= 9; multiplier++)
		{
			putchar(',');
			putchar(' ');

			product = num * multiplier;

			if (product <= 9)
				putchar(' ');
			else
				putchar((product / 10) + '0');

			putchar((product % 10) + '0');
		}

		putchar('\n');
	}
}
