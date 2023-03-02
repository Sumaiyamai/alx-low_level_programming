#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *  that will use at most n bytes from src
 *
 *  @dest: is the output
 *  @src: is the input src
 *  @n: number of bytes from source
 *
 *  Return: return dest
 *
 */
char *_strncat(char *dest, char *src, int n);
{
	int s = 0;
	int u = 0;

	while (dest[s] != '\0')
		{ s++; }
	while (src[u] != '\0' && u < n)
	{
		dest[s] = src[u];
		u++;
		s++;
	}
	return (dest);
}
