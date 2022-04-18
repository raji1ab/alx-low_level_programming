#include "main.h"
/**
 * reset_to_98 - pointer that updates the value it points to
 * @int *n: is the declaration of the pointer n
 * @n: is the name of the pointer
 * Return: nothing
 */
void reset_to_98(int *n)
{
	int b;

	n = &b;

	*n = 'b';
	_putchar(b);
}
