#include "main.h"
/**
 * list_handle - A function to handle a linked list
 * Return: the pointer to the linked list;
 */
list_t *list_handle()
{
	char *token = NULL;
	char *str = NULL;
	list_t *head;
	char *str_copy = NULL;

	str = path();
	if (!str)
		return (NULL);
	str_copy = malloc(sizeof(char) * strlen(str) + 1);
	strcpy(str_copy, str);
	token = strtok(str_copy, ":");
	head = malloc(sizeof(list_t));
	if (!head)
		return (NULL);
	head->data = token;
	head->link = NULL;
	token = strtok(NULL, ":");
	while (token)
	{
		add_node(head, token);
		token = strtok(NULL, ":");
	}
	return (head);
}
