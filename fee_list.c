#include "main.h"
/**
 * free_list - A function to free linked list
 * @head: the head pointer to the linked list;
 * Return: nothing;
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head)
	{
		temp = head->link;
		free(head->data);
		free(head);
		head = temp;
	}
}
