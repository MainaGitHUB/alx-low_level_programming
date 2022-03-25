#include "main.h"
#include <stdio.h>
/**
 *  * print_number - prints an integer
 *   * @n: variable to check
 *    *
 *     * Description: prints intergers even negative
 *      *
 *       * Return: 0 success
 */
void print_number(int n)
{
	int digit = 0, i, tmp, current, power, j;

	tmp = n;
	while (tmp != 0)
	{
		tmp = tmp / 10;
		digit++;
	}
	tmp = n;
	if (digit == 0)
		_putchar('0');
	for (i = digit - 1; i >= 0; i--)
	{
		power = 1;
		for (j = 1; j <= 1; j++)
			power = power * 10;
		current = tmp / power;
		tmp = tmp % power;
		if (n < 0)
		{
			current = -current;
			if (i == digit -1)
				_putchar(' ');
			_putchar(current + '0');
		}
		else
		{
			_putchar(current + '0');
		}
	}
}
