#include "main.h"
/**
 * interactive - A function to execute command;
 * @envp: the environment parameter;
 * Return: Always (0) on Success;
 */
int interactive(char **envp)
{
	char **argv = NULL;
	char *str = NULL;
	ssize_t size;

	while (isatty(1))
	{
		printf("$Shell$: ");
		size = _input(&str);
		if (size == -1)
		{
			printf("\nExiting/....\n");
			free(str);
			return (0);
		}
		else
		{
			argv = toke(str, size);
			handle(argv, envp);
			__free(argv);
			argv = NULL;
			_free(str);
			str = NULL;
		}
	}
	return (0);
}
