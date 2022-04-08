#include <stdio.h>
/**
 * main - Entry point
 * Description - possible combination of 2 digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b;

for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
if (a == b)
{
continue;
}
if (b == 57)
{
break;
}
if (a > b)
{
putchar(b);
putchar(a);
putchar(',');
putchar(' ');
}
}
{
putchar('\n');
}
return (0);
}
