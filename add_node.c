#include "main.h"
/**
 * add_node - A function to create a linked list;
 * @head: the head pointer
 * @str: the data passed
 * Return: nothing;
 */
void add_node(list_t *head, char *str)
{
	list_t *temp;
	list_t *ptr = head;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return;

	temp->data = strdup(str);
	temp->link = NULL;

	if (head == NULL)
		return;

	while (ptr->link)
		ptr = ptr->link;

	ptr->link = temp;
}
