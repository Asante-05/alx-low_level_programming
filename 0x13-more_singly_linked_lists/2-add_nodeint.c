#include "lists.h"
/**
 * add_nodeint - adds a new node to the beginning of the list
 * @head: points to the pointer of the head node
 * @n: data to be stored in the node
 * Return: the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *curr;

	curr = malloc(sizeof(listint_t));


	if (curr != NULL)
	{
		curr->n = n;
		curr->next = *head;
		*head = curr;
	}
	else
	{
		return (NULL);
	}
	return (curr);
}
