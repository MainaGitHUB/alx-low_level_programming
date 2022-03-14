#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t1 = 48;
	int r = 0;
	int l;
	int com = 44;

	while (r <= 99)
	{
		l = r + 1;
		while (l <= 99)
		{
			putchar((r / 10) + t1);
			putchar((r % 10) + t1);
			putchar(32);
			putchar((l / 10) + t1);
			putchar((l % 10) + t1);
			if (r != 98 || l != 99)
			{
				putchar(com);
				putchar(32);
			}
			l++;
		}
		r++;
	}
	putchar('\n');
	return (0);
}
