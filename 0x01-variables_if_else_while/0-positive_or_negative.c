#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf("%d is positive\n", n);
/*prints out positive if n is greater than zero*/
else if (n == 0)
printf("%d is zero\n", n);
/*prints out zero*/
else
printf("%d is negative\n", n);
/*prints out negative if n is less than zero*/
return (0);
}
