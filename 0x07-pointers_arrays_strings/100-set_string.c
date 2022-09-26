/*
 * File: 100-set_string.c
 * Auth: EASY
 */

#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: The pointer to change
 * @to: string to change pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
