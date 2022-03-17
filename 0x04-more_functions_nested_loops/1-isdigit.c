#include "main.h"
#include <stdio.h>

/**
 * functions checks for a digit (0 through 9)
 * returns 1 if @c is a digit, return 0 if otherwise
 */
int _isdigit(int c)
{
	int b = 0;

	if (c >= '0' && c <= '9')
	{
		b = 1;
	}
	else
	{
		b = 0;
	}
	return (b);
}
