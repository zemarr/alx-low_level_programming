#include "main.h"

/**
 * _islower - checks is a character is lowercase
 * @c: the character the function recieves
 * Return: 1 if true. 0 if false.
 */

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/* Check if c is lowercase */
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
