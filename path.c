#include "main.h"
/**
 * path - A function to get the path of command;
 * Return: the path of the given command;
 */
char *path()
{
	char *str = "PATH=";
	char *_path = NULL;
	char **env = NULL;

	env = environ;
	while (*env)
	{
		if (strncmp(str, *env, 5) == 0)
		{
			_path = *env;
		}
		*env++;
	}
	*env = NULL;
	return (_path);
}
