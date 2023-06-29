#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string.
 * Return: void.
 */
void print_rev(char *s)
{
int length = 0;
int i=length;
while (s[length] != '\0')
{
length++;
}
i=length;
if (*s != '\0')
{
while (i >= 0 &&)
{
putchar (s[i]);
i--;
}
}
putchar('\n'); 
}
