#include "main.h"

/**
 * _puts - write a function that prints a string, followed by a new line, to
 * stdout.
 *
 * @str: This is my input string
 *
 */

void puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		putchar(str[index]);
	}
	putchar('\n');
}
