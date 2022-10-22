#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
char alfa;

for (n = '0'; n <= '9'; n++)

putchar(n);

for (alfa = 'a'; alfa <= 'f'; alfa++)

putchar(alfa);

putchar('\n');


return (0);
}
