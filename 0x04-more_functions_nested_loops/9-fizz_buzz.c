#include "main.h"
#include <stdio.h>
/**
 *  * main - test
 *   * @void: Parameter of times
 *    * Description test as an interviews to filter candidates
 *     * Return: 0 is success
 */
int main(void)
{
	int a;

	for ( a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			putchar("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			putchar("Fizz");
		}
		else if (a % 5 == 0)
		{
			putchar("Buzz");
		}
		else
		{
			putchar("%d", a);
		}
		if (a != 100)
		{
			putchar(" ");
		}
	}
	putchar("\n");
	return (0);
}
