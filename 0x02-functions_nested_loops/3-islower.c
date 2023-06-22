#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase charactei
 * @c: integer value of a character
 *
 * Return: 1 if the character is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
