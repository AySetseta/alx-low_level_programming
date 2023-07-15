#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

/* Loop through single-digit numbers from 0 to 9 */
for (i = 0; i < 10; i++)
putchar(i + '0');

/* Print a new line */
putchar('\n');

return (0);
}
