#include "main.h"
/**
 * _getline - A function to take input from user;
 * @str: the list of command and his options
 * @n: the size of the buffer;
 * @stream: the input stream;
 * Return: the size of the buffer;
*/
ssize_t _getline(char **str, size_t *n, FILE *stream)
{
	ssize_t num = 0;

	num = getline(str, n, stream);
	return (num);
}
