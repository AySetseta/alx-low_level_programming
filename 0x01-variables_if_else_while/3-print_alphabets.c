#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
char c;

/* print lower case alph */
for (c = 'a'; c <= 'z'; c++)
putchar(c);

/* print uppercase alph */
for (c = 'A'; c <= 'Z'; c++)
putchar(c);

putchar('\n');

return (0);
}
