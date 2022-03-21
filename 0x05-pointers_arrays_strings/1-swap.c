#include <main.h>

/**
 * function swap_int swaps @a and @b using an extra variable @c
 * 
 * Return (0) always for true
 */

void swap_int(int *a, int *b)
{
	int c ;
	c = *a;
	*a = *b;
	*b = c;
}
