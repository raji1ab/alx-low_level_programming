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

for (num = 0; num < 10; num++)
{
for (a = 0; a <= 14; a++)
{
if (a > 9)
{
_putchar((a / 10) + '0');
}
_putchar((a % 10) + '0');
}
_putchar(10);
}
}
