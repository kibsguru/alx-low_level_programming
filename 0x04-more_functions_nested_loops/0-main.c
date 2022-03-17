#include "main.h"
#include <stdio.h>

/**
 * main -  check on the code.
 *
 *Return: Always 0
 */

int main(void)
{
	char c;

	c = 'F';
	printf("%c: %d\n", c, _isupper(c));
	c = 'b';
	printf("%c: %d\n", c, _isupper(c));

	return (0);

}
