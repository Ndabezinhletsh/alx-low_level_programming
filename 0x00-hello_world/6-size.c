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
printf("Size of a char: %ld byte(s) \n", sizeof(charType));
printf("Size of an int: %ld byte(s) \n", sizeof(intType));
printf("Size of a long int: %ld byte(s) \n", sizeof(intlongType));
printf("Size of a long long int: %ld byte(s) \n", sizeof(intlonglongType));
printf("Size of a float: %ld byte(s) \n", sizeof(floatType));
return (0);
}
