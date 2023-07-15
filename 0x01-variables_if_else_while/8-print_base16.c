#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;

/* Loop through single-digit numbers */
for (c = '0'; c <= '9'; c++)
putchar(c);

for (c = 'a'; c <= 'f'; c++)
putchar(c);

/* Print a new line */
putchar('\n');

return (0);
}
