#include <stdio.h>
/**
 * main - Entry point
 * Description - prints alphabet in upper and lower
 * Return: always (0) success
 */
int main(void)
{
	char g;

	char G;

for (g = 'a'; g <= 'z'; g++)
{
	putchar(g);
}
for (G = 'A'; G <= 'Z'; G++)
{
	putchar(G);
}
{
	putchar('\n');
}
return (0);
}
