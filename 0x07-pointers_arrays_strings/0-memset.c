#include "main.h"
/**
 * _memset - fills memory area upto n bytes
 * @s: pointer
 * @b: constant character
 * @n: number of bytes
 * Return: pointer to string s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
