/*
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to be filled memory area @s.
 *
 */
void *_memset(void *s, int c, size_t n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
