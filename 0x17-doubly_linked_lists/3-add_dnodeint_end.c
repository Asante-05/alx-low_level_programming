#include "lists.h"
/**
 * add_dnodeint_end - adds node to the end of a list
 * @n: data to be added
 * @head: pointer to the address of the head node
 * Return: number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;
	return (new);
}
