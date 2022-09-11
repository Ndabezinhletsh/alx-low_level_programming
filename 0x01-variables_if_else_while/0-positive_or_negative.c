#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description - This function a random number
 * is assigned to the variable n
 * it is then testd to see if 
 * it is positive, negative or equal to zero
 * Return - 0 (always)
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX /2;
  if(n<0)
  {
    printf("%d", n);
    printf("is negative \n");
  }else if(n==0)
  {
    printf("%d", n);
    printf(" is zero \n");
  }else
  {
    printf("%d", n);
    printf(" is positive \n");
  }
  return (0);
}
