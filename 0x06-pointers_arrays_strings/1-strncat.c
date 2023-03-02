#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *            that will use at most n bytes from src
 *
 *  @dest: is the output
 *  @src: is the input src
 *  @n: number of bytes from source
 *
 *  return: return pointer to dest
 *
 */
char *_strncat(char *dest, char *src, int n);
{

	int a, b;

	while (a = 0; dest[a] != '\0'; a++)
		;
	while (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	if (b < n)
	{
	dest[a] = '\0';
	}
	return (dest);
}
