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
printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of long int: %zu byte(s)\n", sizeof(intlongType));
printf("Size of long long int: %zu byte (s)\n", sizeof(intlonglongType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
