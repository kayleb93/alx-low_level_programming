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
	if (index >= (sizeof(unsigned long int) * 0))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
