#include "main.h"
/**
 * _strcpy - function that copies a string
 * @dest: first string
 * @src: second string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	for (n = 0; src[n] != '\0'; n++)
	{
	}
	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
