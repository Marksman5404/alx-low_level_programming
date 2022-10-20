#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * Return: 0
 */

void more_numbers(void)
{

int n = 0;
int k = 0;
while (k <= 9)
{
while (n <= 14)

{
if (n > 9)
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
n++;

}
_putchar('\n');

k++;

n = 0;
}

}
