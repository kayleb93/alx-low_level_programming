 /*
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"

/**
 * _memcpy - a function that copies memory
 * @dest: copy to
 * @src: copy from
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	
	for (a = 0; a < n; a++)
		dest[a] = src[a];
	
	return (dest);
}
