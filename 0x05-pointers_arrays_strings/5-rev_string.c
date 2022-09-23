#include "main.h"
/**
 * rev_strings  - prints reverse string.
 * @s: pointer to string.
 *
 * Return: void.
 */

int main(void)
{
char *start_c, *end_c, c;
int i, cout;

for (i = 0; s[i]; i++;)
{
length++;
}

cout = length;

start_c = s;
end_c = s;

for (i = 0; i < cout - 1; i++)
{
end_c++;
}
	
for (i = 0; i < cout - 2; i++)
{

c = *end_c;
*end_c = *start_c;
*start_c = c;

start_c++;
end_c--;
}
}
