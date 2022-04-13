#include <stdio.h>
/**
 * main - first 50 fibonacci terms
 *
 * Return: 0 always
 */
int main(void)
{
	long int i, f1 = 1, f2 = 2, sum = 0;

	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", f1);
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
	if (i == 48)
		printf("%ld\n", f1);
	}
	return (0);
}

