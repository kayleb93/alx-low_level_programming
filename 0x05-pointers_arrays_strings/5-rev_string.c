#include "main.h"
/**
 * rev_strings  - reverse the string.
 * @s: pointer to string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	char s[10] = "My School";
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
