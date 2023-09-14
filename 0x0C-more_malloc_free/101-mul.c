<<<<<<< HEAD
#include<string.h>
#include "main.h"

/**
 * _isdigit - checks if character is digit
 * @c: the character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_digit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int is_digit(int c)
>>>>>>> 41349deb5ed0eb7757cd0f2857bd596a1a75ff57
{
	return (c >= '0' && c <= '9');
}

/**
<<<<<<< HEAD
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * big_multiply - multiply two big number strings
 * @s1: the first big number string
 * @s2: the second big number string
 *
 * Return: the product big number string
 */
char *big_multiply(char *s1, char *s2)
{
	char *r;
	int l1, l2, a, b, c, x;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	r = malloc(a = x = l1 + l2);
	if (!r)
		printf("Error\n"), exit(98);
	while (a--)
		r[a] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
		{
			free(r);
			printf("Error\n"), exit(98);
		}
		a = s1[l1] - '0';
		c = 0;

		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(r);
				printf("Error\n"), exit(98);
			}
			b = s2[l2] - '0';

			c += r[l1 + l2 + 1] + (a * b);
			r[l1 + l2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			r[l1 + l2 + 1] += c;
	}
	return (r);
}


/**
 * main - multiply two big number strings
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
	char *r;
	int a, c, x;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = _strlen(argv[1]) + _strlen(argv[2]);
	r = big_multiply(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < x)
	{
		if (r[c])
			a = 1;
		if (a)
			_putchar(r[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
=======
 * string_length - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: the length of the string
 */
int string_length(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return length;
}

/**
 * multiply_big_numbers - multiplies two big number strings
 * @num1: the first big number string
 * @num2: the second big number string
 *
 * Return: the product as a big number string
 */
char *multiply_big_numbers(char *num1, char *num2)
{
	char *result;
	int length1, length2, digit1, digit2, carry, product, sum, index;

	length1 = string_length(num1);
	length2 = string_length(num2);

	result = malloc(sizeof(char) * (length1 + length2 + 1));
	if (!result)
	{
		printf("Error: Memory allocation failed\n");
		exit(98);
	}

	for (index = 0; index < length1 + length2; index++)
		result[index] = '0';
	result[index] = '\0';

	for (length1--; length1 >= 0; length1--)
	{
		if (!is_digit(num1[length1]))
		{
			free(result);
			printf("Error: Invalid input\n");
			exit(98);
		}

		digit1 = num1[length1] - '0';
		carry = 0;

		for (length2 = string_length(num2) - 1; length2 >= 0; length2--)
		{
			if (!is_digit(num2[length2]))
			{
				free(result);
				printf("Error: Invalid input\n");
				exit(98);
			}

			digit2 = num2[length2] - '0';

			product = digit1 * digit2 + carry;
			sum = result[length1 + length2 + 1] - '0' + product;

			result[length1 + length2 + 1] = (sum % 10) + '0';
			carry = sum / 10;
		}

		if (carry)
			result[length1 + length2 + 1] += carry;
	}

	return result;
}

/**
 * main - multiplies two big number strings
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 on success
 */
int main(int argc, char **argv)
{
	char *result;
	int length, has_nonzero, index;

	if (argc != 3)
	{
		printf("Error: Two arguments expected\n");
		exit(98);
	}

	length = string_length(argv[1]) + string_length(argv[2]);
	result = multiply_big_numbers(argv[1], argv[2]);

	has_nonzero = 0;
	for (index = 0; index < length; index++)
	{
		if (result[index] != '0')
			has_nonzero = 1;

		if (has_nonzero)
			putchar(result[index]);
	}

	if (!has_nonzero)
		putchar('0');

	putchar('\n');
	free(result);

	return 0;
}
>>>>>>> 41349deb5ed0eb7757cd0f2857bd596a1a75ff57
