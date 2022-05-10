#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - printsstrings followed by a new line
 * @separator: seperators
 * @n: number of arguements
 */
void print_string(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *ptr;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(strings, char*);
		if (ptr == NULL)
			printf("(nill)");
		else
		{
			printf("%s", ptr);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
