#include "main.h"

/**
 * rev_strings  - prints reverse string.
 * @s: pointer to string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, c, k;
	char *a, aux;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}
	for (k = l; k < c; k++)
	{
		a++;
	}
	for (i = 0; i < (c / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
}
