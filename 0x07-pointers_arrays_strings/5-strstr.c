#include "main.h"
/**
 * _strstr - locates a sub string
 * @haystack: input string
 * @needle: string to find
 * Return: pointer to the located sub string
 */
char *_strstr(char *haystack, char *needle)
{
	int k;

	while (*haystack != '\0')
	{
		k = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			haystack++, needle++, k++;
			if (*needle == '\0')
				return (haystack - k);
			haystack -= (k - 1), needle -= k;
	}
	return ('\0');
}
