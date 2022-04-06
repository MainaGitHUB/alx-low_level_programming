#include "main.h"
/**
 *print_square - Draws a square
 *_putchar - Prints characters one by one
 *@size: Parameter of size
 *Description: Draws a square
 *Return: 0 Value
 */
void print_square(int size)
{
	/**
	 * Where size is the size of the square
	 * If size is 0 or less, the function should print only a new line
	 * Use the character # to print the square
	 */
	int y, z;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (z = 0; z < size; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
