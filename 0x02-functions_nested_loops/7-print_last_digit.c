#include "main.h"

/**
 * print_last_digit - print the last digit of given numbers
 * @n: values to be inserted
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		lastdigit = (-1 * (n % 10));
		return (lastdigit);
	}
	else
	{
		lastdigit = (n % 10);
		return (lastdigit);
	}

	return (0);

}
