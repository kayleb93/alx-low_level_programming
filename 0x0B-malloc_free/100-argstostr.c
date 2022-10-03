#include "main.h"

/**
 * len - returns length of str
 * @str: string counted
 * Return: returns the length
 */
int len(char *str)
{
		int len = 0;

		if (str != NULL)
		{
			while (str[len])
				len++;
		}
	return (len);
}

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: count of args passed to the function
 * @av: array of arguments
 *
 * Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			count++;
			b++;
		}
		a++;
	}
	count = count + ac + 1;
	str = malloc(sizeof(char) * count);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
