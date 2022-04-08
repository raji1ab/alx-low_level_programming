#include <stdio.h>
/**
 * main - Entry point
 * Description - skip e and q
 * Return: Always 0 (success)
 */
int main(void)
{
	char g;

for (g == 'a'; g <= 'z'; g++)
{
	if (g == 'e')
		continue;
	else if (g == 'q')
		continue;
	else
		putchar(g);
}
{
	putchar('\n');
}
return (0);
}

