#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates a random number tests whether it
* is positive or negative or equal to zero
* Description - Using the main fuction this program
* generates a random number and tests it
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i is positive", n);
}
else if (n == 0)
{
printf("%i is zero", n);
}
else if (n < 0)
{
printf("%i is negative", n);
}
return (0);} 
