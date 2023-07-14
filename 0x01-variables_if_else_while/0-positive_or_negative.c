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

/* Seed the random number generator */
srand(time(NULL));

/* Generate a random number between -100 and 100 */
n = rand() % 201 - 100;

if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is zero\n", n);
}

return (0);
}
