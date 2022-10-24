#include "lists.h"
/**
 * listint_len - function to return the number of elements.
 * @h: pointer to a linked list
 * Return: returns the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
