/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function takes two integer pointers, @a and @b,
 * and swaps the values of the integers they point to. It achieves this
 * by using a temporary variable @c to hold the value of @a, then
 * assigns the value of @b to @a, and finally assigns the value of @c
 * (which originally held the value of @a) to @b. As a result, the values
 * of @a and @b are effectively swapped.
 */
void swap_int(int *a, int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
}
