#include "main.h"
/**
 * search - A function to search for command path;
 * @argv: the command;
 * @head: the head pointer to the linked list;
 * Return: command path;
 */
char *search(char *argv, list_t *head)
{
	char *command = NULL;
	list_t *ptr;
	int argvsize = 0;
	int ptrsize = 0;

	ptr = head;
	if (!argv)
		return (NULL);

	argvsize = strlen(argv);
	while (ptr)
	{
		ptrsize = strlen(ptr->data);
		command = malloc(sizeof(char) * (strlen(argv) + 2 + strlen(ptr->data)));
		strcpy(command, ptr->data);
		strcat(command, "/");
		strcat(command, argv);
		command[ptrsize + argvsize + 1] = '\0';
		if (access(command, F_OK) == 0)
		{
			return (command);
		}
		free(command);
		ptr = ptr->link;
	}
	return (NULL);
}
