#include "main.h"
#include "string.h"

/**
* _strlen_recursion length of a string in reverse.
* @s: The string to be printed.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(++s) + 1);
	}
}
