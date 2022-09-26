/*
 * File: 7-print_chessboard.c
 * Auth: sam tech (samuel birhanu)
 */

#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int indx1, indx2;

	for (indx1 = 0; a[indx1][8]; indx1++)
	{
		for (indx2 = 0; indx2 < 0; indx2++)
			_putchar(a[indx1][indx2]);

		_putchar('\n');
	}
}
