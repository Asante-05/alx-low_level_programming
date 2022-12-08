#include "lists.h"
/**
 * print_dlistint - print all elements of a doubly linked list
 * @h: head of doublylinked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t num_of_nodes = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		num_of_nodes++;
		temp = temp->next;
	}
	return (num_of_nodes);
}
