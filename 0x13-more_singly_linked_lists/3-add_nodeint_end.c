#include "lists.h"
/**
 * add_nodeint_end - add a new node to the end of the node
 * @head: head of the node
 * @n: data to be added to the node
 * Return: return the address of the new head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr, *tmp;

	curr = malloc(sizeof(listint_t));

	if (curr == NULL)
	{
		return (NULL);
	}

	curr->n = n;
	curr->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = curr;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = curr;
	}
	return (*head);
}


