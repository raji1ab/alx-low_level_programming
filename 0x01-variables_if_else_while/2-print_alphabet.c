#include <stdio.h>
/**
 * main - Entry point
 * Description - Function that prints the alphabet
 * Return: 0 Always (success)
 */
int main(void)
{
	char g;

	for (int g = 'A'; g <= 'Z'; ++g)
	{
		int lower_g = tolower(g);

		putchar(lower_g);
	}
return (0);
}
