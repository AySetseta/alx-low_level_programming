#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 (success)
 */
int main(void)
{
int num1, num2;
for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
int tens1 = num1 / 10;
int units1 = num1 % 10;
int tens2 = num2 / 10;
int units2 = num2 % 10;

putchar('0' + tens1);
putchar('0' + units1);
putchar(' ');
putchar('0' + tens2);
putchar('0' + units2);

if (num1 != 98 || num2 != 99)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');
return (0);
}
