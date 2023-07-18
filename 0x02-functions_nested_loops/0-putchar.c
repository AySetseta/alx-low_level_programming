#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - Entry Point
 *
 * Return: 0 (success)
 */

int main(void)
{
const char message[] = "_putchar\n";
write(1, message, sizeof(message) - 1);
return (0);
}
