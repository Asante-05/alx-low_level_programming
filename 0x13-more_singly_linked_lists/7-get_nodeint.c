#include "lists.h"
/**
 * get_nodeint_at_index - gets the node position
 * @head: the head of the linked list
 * @index: position of the node
 * Return: the specified node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}

