#include "main.h"
/**
 *times_table - unction that prints the 9 times table, starting with 0.
 *Return: times table
 */

void times_table(void)
{
int times, mark, d;

for (times = 0; times <= 9; times++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (mark = 1; mark <= 9; mark++)
{
d = (times * mark);
if ((d / 10) > 0)
{
_putchar((d / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((d % 10) + '0');

if (mark < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
