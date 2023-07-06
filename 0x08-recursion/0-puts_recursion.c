#incude "main.h"

/**
 * _puts_recursion - Function to print a string followed by a new line
 * @s: Pointer to the string to be printed
 * Return: void
 */

void _puts_recursion(char *c)
{
	if (*c)
	{
		_putchar(*c);
		_puts_recursion(c + 1);
	}

	else
		_putchar('\n');
}
