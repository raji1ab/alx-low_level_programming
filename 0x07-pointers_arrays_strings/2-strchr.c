#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character to be located
 * Return: pointer to first occurence of character c
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}
	return (s[i] == c ? (s + i) : '\0');

}
