/*
 * File: 3-print_numbers.c
 * Auth: Nicholas M Mwanza
 * Programming in c 2021
 */
#include "holberton.h"
/**
 * print_numbers print numbers
 * _putchar print characters
 * return (numbers since 0 up to 9)
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar(num + '0');
	_putchar('\n');
}
