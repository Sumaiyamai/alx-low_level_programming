#include "main.h"
#include <stdio.h>

/**
 * main - check positive or negative function.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;


	i = '0';
	printf("%i: %d\n", i, positive_or_negative(i));
	return (0);
}
