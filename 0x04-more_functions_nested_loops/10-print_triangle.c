#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 * Return: nothing.
 */
void print_triangle(int size)
{
	int i, j;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
_puchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
