#include "main.h"
#include <stdio.h>

/**
 * is_lower - checks if a character is lowercase
 *
 * @c: the character to check
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int is_lower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
