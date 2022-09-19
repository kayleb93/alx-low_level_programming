#include "main.h"
#include <stdio.h>
/**
 * rev_strings  - reverse the string.
 * @s: pointer to string.
 *
 * Return: void.
 */

int main(void)
{
	int i, j, k, tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	while (k < j)
	{
		tmp = s[k];
		s[k] = s[j];
		s[j] = tmp;
		k++;
		j--;
	}
}
