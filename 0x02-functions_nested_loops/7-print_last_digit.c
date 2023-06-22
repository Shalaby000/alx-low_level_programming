#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int x;
	
	if (n < 0 && n > INT_MIN)
	{
		n = -n;
		n = n % 10;
	}
	else if (n == INT_MIN)	
	{
		n = -(n + 1);
		x = (n % 10) + 1;
	}
	else
	{
		x = n % 10;
	}
	_putchar(x + 48);
	return (x);
}
