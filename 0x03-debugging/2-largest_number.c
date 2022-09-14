#include "main.h"

/**
 *largest_number[D[D[D[D[D[D[D[D[D[D[D[D[D[D [C[C[C[C[C[C[C[C[C[C[C[C[C - return[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[Dl[C[C[C[C[C[C[C[C[C[C[C[ * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}
