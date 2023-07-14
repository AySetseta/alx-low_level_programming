#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastnum;
/* Seed the random number generator */
srand(time(0));

n = rand() - RAND_MAX / 2;

printf("Last digit of %d is", n);

/* Get the last digit of n */
lastnum  = n % 10;

if (lastnum > 5)
printf(" and is greater than 5");
else if (lastnum == 0)
printf(" and is 0");
else
printf(" and is less than 6 and not 0");
printf("\n");

return (0);
}
