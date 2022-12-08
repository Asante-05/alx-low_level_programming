#include "lists.h"
/**
 * free_dlistint - function to free a linked list
 * @head: head of doublylinked list
 * Return: number of nodes
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;
	dlistint_t *prev = NULL;

	while (cur)
	{
		prev = cur;
		cur = cur->next;
		free(prev);
	}
}
