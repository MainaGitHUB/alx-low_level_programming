#include "main.h"
#include  <stdio.h>
/**
 * print_binary -  prints the binary representation of a number
 * @n: integer to convert
 */
void print_binary(unsigned long int n)
{
	int x, rep;

	if (n == 0)
		_putchar('0');
	for (rep = 0, x = sizeof(n) * 8 - 1; x >= 0; x--)
	{
		if ((n >> x) & 1)
			rep = 1;
		if (rep == 1)
			((n >> x) & 1) ? _putchar('1') : _putchar('0');
	}
}
