#include "main.h"

/**
 * function swap_int swaps 
 * @a points to the first integer and 
 * @b point to the second variable
 */

void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
