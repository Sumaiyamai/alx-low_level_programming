#include "main.h"
#include <unistd.h>

/**
 * main - prints putchar
 *
 * Return: Always 0.
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}

