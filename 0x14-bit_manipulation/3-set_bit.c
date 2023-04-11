#include "main.h"

/**
 * set_bit - setting a bit to 1 at a specific index.
 * @n: the pointer to decimalto be used.
 * @index: The binary position to modify.
 *
 * Return: 1 if success, -1 if not success.
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	mask = mask << index;

	*n = *n | mask;

	return (1);
}
