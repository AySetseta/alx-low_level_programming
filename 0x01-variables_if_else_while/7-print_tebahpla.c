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
for (c = 'z'; c >= 'a'; c--)
putchar(c);

putchar('\n');

return (0);
}
