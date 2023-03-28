#include "main.h"

/**
 * _strlen - calculates the length of string with recursion
 * @s: string
 * Return: length
 */

int _strlen(const char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen((s + 1)));
}

