#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: prefix substring to be measured
 *
 * Return: the number of bytes of @s,
 *	consisting of only bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int n;

	while (*s)
	{

		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				bytes++;
				break;
			}

			else if (accept[n + 1] == '\0')
				return (bytes);
		}
		s++;
	}

	return (bytes);
}
