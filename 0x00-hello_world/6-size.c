/*
 * File: 6-size.c
 * Auth: Nicholas M Mwanza
 */

#include <stdio.h>

/**
 *main - prints the size of various types based on
 *       the computer it is complied and run on...
 *
 *Return: Always 0 (success)
 */
int main(void)
{
Printf("Size of a char: %d bytes(s)\n", sizeof(char));
printf("Size of an int: %d bytes(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));

return (0);
}
