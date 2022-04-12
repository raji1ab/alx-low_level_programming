#include "main.h"

/**
 * _isalpha - identify alphabets
 * @c: int to be indentified
 * Return: Always 0
 */
int _isalpha(int c)
{
	if (('c' >= 'a' && 'c' <= 'z') || ('c' >= 'A' && 'c' <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
