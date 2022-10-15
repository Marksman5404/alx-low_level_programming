#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int n, lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Enter an integer number : ");
scanf("%d", &n);

/* find the last digit of a number*/
lastDigit = n % 10;

if (lastDigit >= 6 && lastDigit != 5)
{
printf("Last digit of n is %i ", lastDigit);
printf("and is greater than 5\n");
}
if (lastDigit < 6 && lastDigit != 0)
{
printf("Last digit of n is %i ", lastDigit);
printf("and is less than 6 and not 0\n");
}
else if (lastDigit < 1 || lastDigit == 0)
{
printf("Last digit of n is %i ", n);
printf("and is 0\n");
}
return (0);
}
