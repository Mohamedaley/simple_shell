#include "main.h"
/**
 * _strtok - A function to tokenize string;
 * @str: the string;
 * @delim: the delimiter
 * Return: the tokenized string;
 */
char *_strtok(char *str, const char *delim)
{
	char *new;

	new = strtok(str, delim);
	return (new);
}
