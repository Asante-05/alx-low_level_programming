#include "lists.h"
/**
 * dlistint_len - function to count the number of nodes
 * @h: head of doublylinked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t num_of_nodes = 0;

	while (temp)
	{
		num_of_nodes++;
		temp = temp->next;
	}
	return (num_of_nodes);
}
