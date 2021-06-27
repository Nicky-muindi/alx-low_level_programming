/*
 * File: 4-print_most_numbers.c
 * Auth: Nicholas M Mwanza
 */
#include "holberton.h"
/**
 * print_most_numbers - Print the numbers since 0 up to 9
 *
 *
 * Return: The numbers since 0 up to 9
 */
void print_most_numbers(void)
{
	int i;
	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
_putchar('\n');
}
