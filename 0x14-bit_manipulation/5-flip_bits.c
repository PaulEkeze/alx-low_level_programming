#include "main.h"

/**
 * flip_bits - determining the minimum number of bits to change.
 * @n: the value to be modified.
 * @m: the value to be modified to.
 *
 * Return: The number of bits modified
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int xor = n ^ m;

	while (xor != 0)
	{
		if ((xor & 1) != 0)
		count++;
		xor = xor >> 1;
	}

	return (count);
}
