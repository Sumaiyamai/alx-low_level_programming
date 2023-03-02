#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *  that will use at most n bytes from src
 *
 *  @dest: is the output
 *  @src: is the input src
 *  @n: number of bytes from source
 *  Return: Always 0
 *
 */
char *_strncat(char *dest, char *src, int n);
{

	int index, count;

	for (index = 0; dest[index] != '\0'; index++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[index] = src[count];
		ndex++;
	}
	if (count < n)
	{
	dest[index] = '\0';
	}
	return (dest);
}
