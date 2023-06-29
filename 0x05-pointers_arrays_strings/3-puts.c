#include "main.h"
/**
 * _puts-prints out a string, followed by a new line, to stdout
 * @str: pointer for string
 * Return : 0
 */
void _puts(char *str)
{
int putchar();
while (*str != '\0')
{
int putchar(*str);
*str++;
}
putchar('\n');
}
