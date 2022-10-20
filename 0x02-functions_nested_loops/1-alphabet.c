#include "main.h"

/**
 * print_alphabet - Function that prints alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}


/**
 * main - Entry point
 *
 * Return: void
 *
 */

int main(void)
{
	print_alphabet();

	return (0);
}
