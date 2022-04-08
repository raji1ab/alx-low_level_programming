#include <stdio.h>
/**
 * main - Entry point
 * Description - possible combination of 2 digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b;

for (a = 48, b = 48; a <= 57, b <= 57; a++, b++)
{
if (a < b)
{
putchar(a);
putchar(b);
putchar(',');
putchar(' ');
if (b == 57)
{
break;
}
else if (a == b)
{
continue;
}
}
{
putchar('\n');
}
return (0);
}
