#include "main.h"
/**
 * print_most_numbers - function that prints numbers
 *
 * Return: nothing.
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50 || a == 52)
		{
			continue;
		}

		_putchar(a);
	}
	_putchar(10);
}
