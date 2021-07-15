#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * File: holberton.h
 * Auth: Nicholas m Mwanza
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0C-more_malloc_free directory.
 */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _strlen(char *);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
int onlyNumbers(char *c);
void multiply(char* s1, char* s2);

#endif
