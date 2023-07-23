#include "main.h"

/**
 * print_string_recursively - prints a string, followed by a new line.
 * @s: string to print
 *
 * Return: void
 */
void print_string_recursively(char *s)
{
    if (*s != '\0')
    {
        _putchar(*s);
        print_string_recursively(s + 1);
    }
    else
    {
        _putchar('\n');
    }
}
