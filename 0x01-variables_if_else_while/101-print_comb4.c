#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
int i, j, k;
/* Iterate through all possible combinations of three digits*/
for (int i = 0; i <= 7; i++)
{
for (int j = i + 1; j <= 8; j++)
{
for (int k = j + 1; k <= 9; k++)
{
/* Check if the combination has distinct digits*/
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
