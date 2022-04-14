#include "main.h"
/**
 * _isupper - identifies upper case character
 * @c: character to be identified
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
