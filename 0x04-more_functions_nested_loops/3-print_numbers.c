/*
 * File: 3-print_numbers.c
 * Auth: Nicholas M Mwanza
 * "_Enjoying prototypes in c programing 2021_"
 */
#include "holberton.h"
/**
 * print_numbers print numbers
 * _putchar print characters
 *   satsfactory
 * return (numbers since 0 up to 9)
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++);
	{
		_putchar(x + '0');
	}

	_putchar('\n');
}
