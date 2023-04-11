#include "main.h"

/**
 * print_binary - converting and printing binary.
 * @n: the decimal to be converted.
 *
 * Return: 0
 **/
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	mask = mask << (sizeof(unsigned long int) * 8 - 1);

	while (mask != 0)
	{
		if ((n & mask) != 0)
		_putchar('1');
		else
		_putchar('0');

	mask = mask >> 1;
	}
}
