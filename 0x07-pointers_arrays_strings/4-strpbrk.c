#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Thd string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: pointer to byte in s that matches or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[i])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
