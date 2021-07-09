/*
 * File: 2-strlen.c
 * Auth: Nicholas M Mwanza
 */

#include "holberton.h"
#include <stddef.h>
/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
