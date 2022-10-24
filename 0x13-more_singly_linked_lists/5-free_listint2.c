#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: head of the node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *curr, *tmp;

	if (head != NULL)
	{
		curr = *head;

		while (curr != NULL)
		{
			tmp = curr;
			curr = curr->next;
			free(tmp);
		}
	}
	*head = NULL;
}
