#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char exp, e, q;
e = 'e';
q = 'q';

for (exp = 'a'; exp <= 'z'; exp++)
{
if (exp != e && exp != q)
putchar (exp);

}

printf("\n");


return (0);

}
