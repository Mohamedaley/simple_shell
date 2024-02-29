#include "main.h"
/**
 * __free - A function to free list of strings
 * @argv: the list of pointers to strings
 * Return: nothing;
 */
void __free(char **argv)
{
	int i = 0;

	while (argv[i])
	{
		free(argv[i]);
		argv[i] = NULL;
		i++;
	}
	free(argv);
	argv = NULL;
}
