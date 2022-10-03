#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*str_concat - a function that concanates two strings.
*@s1: First string
*@s2: Second string
*Return: NULL in case of failure, but pointer to new string in 
*case of success
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (k < 1)
	{
		if (k <= 1)
			s[k] = s1[k];

		if (k >= 1)
		{
			s[k] = s2[k];
			j++;
		}

		i++;
	}

	s[k] = '\0';
	return (s);
}
