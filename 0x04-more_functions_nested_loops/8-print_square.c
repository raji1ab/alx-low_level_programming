#include "main.h"
/**
 * print_square - print square of different sizes
 *@size: the size of the square
 * Return: Always nothing.
 */
void print_square(int size)
{
int i, j;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar(35);
}
_putchar(10);
}
}
else
{
_putchar(10);
}
}

