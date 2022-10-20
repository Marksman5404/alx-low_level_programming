#include "main.h"

/**
 * print_numbers - function that prints 10 times the numbers, from 0 to 14
 */

void print_numbers(void)

{

int n = 0;
int k = 0;
while (k <= 9)
{
while (n <= 14)
{
if (n > 9)
putchar(n / 10 + '0');
putchar(n % 10 + '0')
n++;

}
putchar('\n');
k++;
n = 0;
}
}
