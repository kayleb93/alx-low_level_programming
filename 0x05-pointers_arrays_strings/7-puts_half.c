#include "main.h"
/**
 * puts_half - function that prints half of a string  followed by a new line.
 *
 * @str: This is the input string
 */
void puts_half(char *str)
{
	int index = 0, len = 0, n;

	while (str[index++]) 
		len++;

	if ((len % 2) == 0
	
	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		putchar(str[index]);

	putchar('\n');
}
