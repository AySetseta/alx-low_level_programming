#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - Entry Point
 *
 * Return: 0 (success)
 */

int _putchar(char c)
{
write(1, &c, 1);
}

int main(void)
{
const char message[] = "_putchar\n";
int i;
for (int i = 0; message[i] != '\0'; i++)
{
_putchar(message[i]);
}
return (0);
}
