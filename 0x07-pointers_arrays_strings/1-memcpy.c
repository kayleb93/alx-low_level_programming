#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory area pointed
 * @dest: A pointer to the memory area to copy @src into.
 * @src: memory area to be copied from
 * @n: The number of bytes to copy from @src.
 * 
 * Return: A pointer to the destination buffer @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	
	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
