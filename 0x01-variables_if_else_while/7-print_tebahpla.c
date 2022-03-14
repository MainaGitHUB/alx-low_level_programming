#include <stdio.h>
/* more headers goes there */
/**
 * main - Program entry point
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	char alp;

	for (alp = 'z' ; alp >= 'a' ; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
