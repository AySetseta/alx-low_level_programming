#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */
int main(void)
{
char c;
int x;

srand(time(0));
while (x <= 2645)
{
c = (rand() % 94) + 33;
x += c;
putchar(c);
}
putchar(2772 - x);
return (0);
}
