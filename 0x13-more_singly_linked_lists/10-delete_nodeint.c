#include "lists.h"
/**
 * delete_nodeint_at_index - inse deletes a node at a given index
 * @head: head of the given node
 * @index: index position of the node
 * Return: (1) if successfuli
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *next;
	unsigned int i = 0;

	curr = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && curr != NULL; i++)
		{
			curr = curr->next;
		}
	}

	if (curr == NULL || (curr->next == NULL && index != 0))
	{
		return (-1);
	}

	next = curr->next;

	if (index != 0)
	{
		curr->next = next->next;
		free(next);
	}
	else
	{
		free(curr);
		*head = next;
	}
	return (1);
}
