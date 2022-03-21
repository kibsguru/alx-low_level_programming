#include "main.h"

/**
 * function swap_int swaps @a and @b using an extra variable @c
 */

void swap_int(int *a, int *b)
{
	int c ;
	c = *a;
	*a = *b;
	*b = c;
}
