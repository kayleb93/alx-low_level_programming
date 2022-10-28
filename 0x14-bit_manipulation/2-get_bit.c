#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given 
 * index.
 * @n: unsigned long int input.  
 * @index: The index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}
	
	return (-1);
}
