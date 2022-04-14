#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: the number of times \ is going to be printed
 * Return: nothing
 */
void print_diagonal(int n)
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
			_putchar('\');
		}
		_putchar('\n');
	}
}
