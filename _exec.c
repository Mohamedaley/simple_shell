#include "main.h"
/**
 * _exec - A function to execute given command;
 * @path_: the path of the command;
 * @argv: the list contain the command and it's options
 * @envp: environment variables;
 * Return: nothing;
 */
void _exec(char *path_, char **argv, char **envp)
{
	int id;

	id = fork();
	if (id == 0)
	{
		execve(path_, argv, envp);
	}
	else
	{
		wait(NULL);
	}
}
