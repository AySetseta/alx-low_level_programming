#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 *_putchar - Writes a character to the standard output (stdout).
 *@c: character to be written.On error, returns -1 and sets errno correctly.
 * Return: 0 (success)
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */

int main(void)
{
print_alphabet();
return (0);
}
