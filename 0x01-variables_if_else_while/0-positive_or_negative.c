#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n < 0)
{
printf("98 is negative");
}
if (n > 0)
{
printf("98 is positive");
}
else
{
printf("0 is zero");
}
return (0);
}
