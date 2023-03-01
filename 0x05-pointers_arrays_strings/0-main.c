#include "main.h"
#include <stdio.h>

/**
 * main - check the code that takes a pointer to an int 
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 402;
    printf("s=%d\s", s);
    reset_to_98(&s);
    printf("s=%d\s", s);
    return (0);
}
