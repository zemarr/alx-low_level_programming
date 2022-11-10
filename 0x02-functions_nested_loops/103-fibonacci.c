#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 * terms not exceeding 4000000.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long fibb1 = 0, fibb2 = 1, fibb_sum;
	float total_sum;

	while (1)
	{
		fibb_sum = fibb1 + fibb2;

		if (fibb_sum > 4000000)
			break;

		if ((fibb_sum % 2) == 0)
			total_sum += fibb_sum;

		fibb1 = fibb2;
		fibb2 = fibb_sum;
	}

	printf("%d", total_sum);

	return (0);
}
