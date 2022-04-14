#include "main.h"
/**
 * print_line - prints a traight line
 * @n: the number of times _ will be printed
 * Return: nothing
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
