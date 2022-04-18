#include "main.h"
/**
 * _atoi - function that converts string to an integer
 *
 * @s: string to be converted
 * Return: 0
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;

	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	res *= sign;

	return (res);
}
