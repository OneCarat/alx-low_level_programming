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
int i=length;
while (i > 0)
{
putchar (s[i]);
i--;
}
putchar("\n"); 
}
