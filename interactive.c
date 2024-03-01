#include "main.h"
/**
 * interacticve - A function to call other functions
 * Return: nothing
 */
void interacticve(void)
{
	char **argv = NULL;
	char *str = NULL;
	ssize_t size;

	while (isatty(1))
	{
		printf("$ ");
		size = _input(&str);
		if (size == -1)
		{
			printf("\nExiting/....\n");
			free(str);
			return;
		}
		else
		{
			argv = toke(str);
			handle(argv);
			__free(argv);
			argv = NULL;
			_free(str);
			str = NULL;
		}
	}
}
