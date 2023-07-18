#include "main.h"
#include <unistd.h>

/* Function definition for _putchar */
int _putchar(char c)
{
return write(1, &c, 1);
}
