#include "main.h"
/**
 * _puts - printas a string followed by a new line
 * @str: name of string
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
