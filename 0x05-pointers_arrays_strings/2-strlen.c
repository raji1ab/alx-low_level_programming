#include "main.h"
/**
 * _strlen - function that prints the length of a string
 * @s: pointer
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i;

	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
