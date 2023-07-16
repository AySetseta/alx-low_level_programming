#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
int i, j, k;
int first, second, third;
/* Iterate through all possible combinations of three digits*/
for (int i = 0; i <= 7; i++)
{
for (int j = i + 1; j <= 8; j++)
{
for (int k = j + 1; k <= 9; k++)
{
/* Check if the combination has distinct digits*/
if (i != j && i != k && j != k)
{
first = '0' + i;
second = '0' + j;
third = '0' + k;

putchar(first);
putchar(second);
putchar(third);

if (i == 7 && j == 8 && k == 9)
{
putchar('\n');
return (0);
}

putchar(',');
putchar(' ');

}

}
}

}

return (0);
}
