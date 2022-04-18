#include "main.h"
/**
 * swap_int - fuction that swaps the value of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a = b;

	*b = a;
}
