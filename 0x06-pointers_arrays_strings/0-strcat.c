#include "main.h"

/**
 *_strcat - function that concatenates two strings.
 *
 *@dest: is the output dest
 *@src:is the input source
 *
 * Return: return to dest, that concatenates two strings
 */

char *_strcat(char *dest, char *src)
{
	int s, u;

	for (s = 0; dest[s] != '\0'; s++)
	{ ; }
	for (u = 0; src[u] != '\0'; u++)
	{
		dest[s] = src[u];
		s++;
	}
	return (dest);
}
