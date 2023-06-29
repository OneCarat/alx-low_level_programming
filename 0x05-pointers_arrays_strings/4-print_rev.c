#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string.
 * Return: void.
 */
void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
int i;
for (i = length; i > 0; i--)
{
putchar (s[i]);
}
putchar("\n"); 
}
