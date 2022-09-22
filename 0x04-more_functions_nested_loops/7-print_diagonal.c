#include "main.h"

/**
* more_numbers ->
*@n: parameter
*Return: returns nothing
*/

void print_diagonal(int n)
{
        int len, space;

        if (n > 0)
        {
                for (len = 0; len < n; space++)
                {
			for (space = 0; space < len; space++)
			{
				_putchar(' ');
			}

	                _putchar('\\');
			_putchar('\n');
             
			if (len == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}	
	}
	
}
