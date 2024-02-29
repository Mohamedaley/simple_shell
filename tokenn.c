#include "main.h"
/**
 * tokenn - A function to sum the number of tokens
 * @str: the string passed
 * Return: the number of tokens;
 */
int tokenn(char *str)
{
	int i = 0;
	char *token = NULL;

	token = _strtok(str, " ");
	while (token)
	{
		i++;
		token = _strtok(NULL, " ");
	}
	return (i);
}
