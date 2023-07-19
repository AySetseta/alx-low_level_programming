#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 * Return: void
 */
void print_alphabet(void)
{
char ch;

for (ch = 'a' ; ch <= 'z'; ch++)
putchar(ch);

putchar('\n');
}
