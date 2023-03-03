#include "main.h"

/**
 * string_toupper - This function will replace all lowercase lett
 * @str: The string that will be checked for lowercase letters
 *
 * Return: The resulting string str, where all the letters are uppercase
 */

char *string_toupper(char *str)
{
	int i;
	int beginning_of_word = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' && beginning_of_word == 1)
		{
			str[i] = (int)str[i] -  32;
			beginning_of_word = 0;
		}
		if (str[i] == ' ')
		{
			beginning_of_word = 1;
		}
	}
	return (str);
}
