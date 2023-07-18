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
return write(1, &c, 1);
}

int main(void)
{
const char message[] = "_putchar\n";
int i = 0;
while (message[i] != '\0')
{
_putchar(message[i]);
i++;
}
return (0);
}
