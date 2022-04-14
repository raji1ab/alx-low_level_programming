#include "main.h"
/**
 * more_numbers - print numbers 0 to 14
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int a;

	int num;

	num = 0;
	while (num < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		num++
		_putchar(10);
	}
}
