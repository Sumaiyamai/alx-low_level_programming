#include "main.h"

/**
 * cap_string - capitalizes every first letter of a word in a string.
 * separators of words are:  space, tabulation,
 * new line, ,, ;, ., !, ?, (, ), {, and }.
 * @str: pointer to string.
 *
 *Return: always retuurn 0.
 */
char *cap_string(char *str);
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
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{'
			|| str[i] == '}')
		{
			beginning_of_word = 1;
		}
	}
	return (str);
}
