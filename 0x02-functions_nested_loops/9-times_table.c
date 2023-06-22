#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: None
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int product = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			product = i * j;
			if (j < 9)
			{
				if (product < 10)
				{
					_putchar(product + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (product < 10)
				{
					_putchar(' ');
					_putchar(product + '0');
				}
				else
				{
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
