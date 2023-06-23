#include <stdio.h>

void print_triangle(int size);

int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}

void print_triangle(int size)
{
    if (size <= 0) {
        putchar('\n');  // Print a new line if size is 0 or less
    } else {
        int i, j;
        for (i = 0; i < size; i++) {
            for (j = 0; j <= i; j++) {
                putchar('#');  // Print the character '#' for each position in the triangle
            }
            putchar('\n');  // Print a new line after each row of the triangle
        }
    }
}

