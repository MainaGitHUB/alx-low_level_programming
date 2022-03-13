#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Program entry point
 * 
 * Return:  on success. Error code otherwise
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf("%d is positive\n", n);
/*if the number is greater than 0: is positive*/
else if (n == 0)
printf("%d is zero\n", n);
/*if the number is 0: is zero*/
else
printf("%d is negative\n", n);
/*if the number is less than 0: is negative*/
return (0);
}
