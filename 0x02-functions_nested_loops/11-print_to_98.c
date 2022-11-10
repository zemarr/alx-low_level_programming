#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * in order separated by a comma followed by a space.
 *
 * @number: The number to begin counting at.
*/

void print_to_98(int number)
{
	if (number >= 98)
	{
		while (nnumber > 98)
			printf("%d, ", number--);
		printf("%d\n", number);
	}
	else
	{
		while (number < 98)
			printf("%d, ", number++);
		printf("%d\n", number);
	}
}
