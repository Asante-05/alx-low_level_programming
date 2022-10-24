#include "lists.h"

/**
 * pop_listint - deletes a node from a linked list
 * @head: head of a list
 *
 * Return: data of head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp, *curr;

	int node_num;

	curr = *head;

	if (curr == NULL)
		return (0);

	node_num = curr->n;

	tmp = curr->next;

	free(curr);

	*head = tmp;

	return (node_num);
}
