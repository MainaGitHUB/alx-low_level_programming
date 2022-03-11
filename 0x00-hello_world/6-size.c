#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int i;
long int i2;
long long int i3;
char c;
float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long )sizeof(i2));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(i3));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
