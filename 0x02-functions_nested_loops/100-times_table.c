#include "main.h"

/**
 * print_times_table - Prints the n times table starting from 0
 * @n: The number to generate the times table for
 */
void print_times_table(int n)
{


int i;
int j;
int result;
i = 0;


while (i <= n)
{
j = 0;
while (j <= n)
{
result = i *j;

if (j == 0)
{
_putchar('0');
}
else
{
_putchar(',');
_putchar(' ');



if (result < 10)
_putchar(' ');

if (result < 100)
_putchar(' ');
_putchar((result / 100) + '0');

_putchar(((result / 10) % 10) + '0');

_putchar((result % 10) + '0');
}
j++;
}
_putchar('\n');
i++;
}
if (n > 15 || n < 0)
return;
}
