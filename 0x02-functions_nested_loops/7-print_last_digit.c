#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @r: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int r)
{
	if (r >= 0)
	{
		return (_putchar((r % 10) + '0'));
	}
	else
	{
		r = r * -1;
		return (_putchar((r % 10) + '0'));
	}
}
