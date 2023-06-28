#include <stdio.h>

/*
*main-checks the code
*
*Return: Always 0.
*/
void swap_int(int *a, int *b);
int main(void)
{
    int a;
    int b;
    a=98;
    b=42;
    printf("The values of a is :%d\n", a);
    printf("The values of b is :%d\n", b);
    swap_int(&a, &b);
    printf("The values of a is :%d\n", a);
    printf("The values of b is :%d\n", b);
    return (0);
}
/*
*swap_int- swaps *a to *b and *b to *a
*c-temporary variable to hold *a
*takes the pointer to an int (*n) and updates it to 98
*/
void swap_int(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
