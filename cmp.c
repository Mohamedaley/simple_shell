#include "main.h"
/**
 * cmp - A function to exit
 * @str: the string which can include exit statement
 * Return: (1) on Success (0) on failure;
 */
int cmp(char *str)
{
	char *ext = "exit";

	if (strcmp(str, ext) == 0)
	{
		return (1);
	}
	else
		return (0);
}
