#include<stdio.h>
/**
 * main - entry point
 * Description: using the main function
 * this program prints sizes of different data types
 * Return: 0
 */
int main(void)
{
char charType;
int intType;
long int intlongType;
long long int intlonglongType;
float floatType;
printf("Size of char: %ld byte(s) \n", sizeof(charType));
printf("Size of int: %ld byte(s) \n", sizeof(intType));
printf("Size of long int: %ld byte(s) \n", sizeof(intlongType));
printf("Size of long long int: %ld byte(s) \n", sizeof(intlonglongType));
printf("Size of float: %ld byte(s) \n", sizeof(floatType));
return (0);
}
