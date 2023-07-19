#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10x
 * Return: void
 */
void print_alphabet_x10(void)
{
char ch;
int i;
i = 0;

while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
}
putchar('\n');
i++;
}
