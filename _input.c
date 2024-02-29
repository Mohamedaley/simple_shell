#include "main.h"
/**
 * _input - A function to take input from user
 * @str: the pointer to the strings
 * Return: the size of buffer;
 */
ssize_t _input(char **str)
{
	size_t size = 128;
	ssize_t num = 0;
	*str = malloc(128);
	if (!*str)
	{
		perror("Error allocating memory");
		return (0);
	}
	num = _getline(str, &size, stdin);
	return (num);
}
