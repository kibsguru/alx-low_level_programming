#include "main.h"

/**
 * isupper to check if c is uppercase
 *
 * Return: if c is uppercase, return 1
 * 	 	c return 0 of otherwise
 */

int _isupper(int c)
{
	/*int b = 0;
	if (c >= 97 && c <= 122)
	{
		b = 0;
	}
	else if (c >= 65 && c <= 90)
	{
		b = 1;
	}
	return (b);*/

	return (c >= 'A' && c <= 'Z');
}
