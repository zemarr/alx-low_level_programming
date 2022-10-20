#include "main.h"

/**
 * _isalpha - Checks if input is an alphabet or a number
 * @c: the value _isalpha receives
 * Return: 1 if true. 0 if false
 *
 */

int _isalpha(int c)
{
	if (c > 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
