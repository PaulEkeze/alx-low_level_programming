#include "main.h"

/**
 * clear_bit - setting a bit to 0 at a particular location.
 * @n: the pointer to decimal.
 * @index: The binary position to modify.
 *
 * Return: 1 if success, -1 if not success
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	mask = mask << index;
	mask = ~mask;

	*n = *n & mask;
	return (1);
}
