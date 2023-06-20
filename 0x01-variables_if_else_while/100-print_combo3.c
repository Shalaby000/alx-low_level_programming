#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, x;

	for (n = 48; n <= 56; n++)
	{
		for (x = 49; x <= 57; x++)
		{
			if (x > n)
			{
				putchar(n);
				putchar(x);
				if (n != 56 || x != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
