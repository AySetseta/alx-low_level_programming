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
i = 0;
while (i <= 7)
{
j = i + 1;
while (j <= 8)
{
k = j + 1;
while (k <= 9)
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
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
