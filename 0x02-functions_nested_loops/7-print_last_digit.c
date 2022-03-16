#include "main.h"
/**
 *print_last_digit - last digit of number
 *@n: input.
 *Return: last digit of number.
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n >= 0)
	{
		lastDigit = n % 10;
	}
	else
	{
		lastDigit = (n % 10) * -1;
	}
	_putchar('0' + lastDigit);
	return (lastDigit);
}
