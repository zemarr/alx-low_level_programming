#include "main.h"

/**
 * print_alphabet_x10 - Print out all the alphabets x10 times
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	char letter;
	int index = 0;

	while (index <= 9)
	{
		for (letter = 'a'; letter <= 'z'; c++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		index++;
	}
}
