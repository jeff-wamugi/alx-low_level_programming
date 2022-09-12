#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character being checked.
 *
 * Return: 1 if character is a letter, lowercaseor uppercase, otherwise 0.
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
