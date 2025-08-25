#include "main.h"
#include <unistd.h>

void _puts(char *s)
{
    while (*s)
        _putchar(*s++);
    _putchar('\n');
}

