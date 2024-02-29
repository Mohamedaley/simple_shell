#include "main.h"
/**
 * _free - A function to free simple thing;
 * @str: the pointer to freed;
 * Return: NULL
 */
void _free(char *str)
{
	free(str);
	str = NULL;
}
