#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: is the output
 * @src: is the input
 * @n: number of bytes to copy
 *
 * Return: return the copied strings with the number of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0' ; index++)
	{
		dest[index] = src[index];
	}
	for (; index  < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}

