#include "main.h"
/**
 * _puts-prints out a string, followed by a new line, to stdout
 * @str: pointer for string
 * Return : 0
 */
putchar();
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
*str++;
}
putchar('\n');
}
