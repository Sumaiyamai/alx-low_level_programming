#include "main.h"

/**
 *  _strncat - function that concatenates two strings
 *  @dest: is the output
 *  @src: is the input src
 *  @n: number of bytes from source
 *
 *  return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int a, b;
	int n;

	for (a = 0; dest[a] != '\0'; a++)
		{}
	for (b = 0; src[b] != '\0'; &&b < n  b++)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	return (dest);
}
