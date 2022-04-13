#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int m = 1024, n, sum = 0;


	for (n = 0; n < m; n++)
{
	if ((n % 3 == 0) || (n % 5 == 0))
	{
		sum = n + sum;
	}
}

printf("%d\n", sum);

return (0);
}
