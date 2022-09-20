#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 *
 * Return: void
 */
void puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	
	putchar('\n');
}

