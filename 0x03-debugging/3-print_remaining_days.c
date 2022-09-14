#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D00 ==) || (year % 4[C[C[C[C[C[ [C[C[C[C[C[C[C[C[C[C[C[D[D[D[D[D[Dyear % 100 !=[C[C 0[C[C[))
{
if (month >= 2 && day >= 60)[D[D[D[D[D[D[D[D[D[D[D[D[D[3[C[C[C[C[C[C[C[C[C[C[C[C[C[C
{
day++;
}

printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}
