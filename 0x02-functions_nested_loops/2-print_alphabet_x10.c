#include "main.h"
/**
 *print_alphabet_x10 - Write a function that prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{

int k = 0;
int n;

while (k++ <= 9)
{
for (n = 'a'; n <= 'z'; n++)


_putchar(n);

_putchar('\n');

}
}
