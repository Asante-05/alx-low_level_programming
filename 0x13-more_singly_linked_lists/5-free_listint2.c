#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: head of the node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *curr;

	if (head != NULL)
	{
		tmp = *head;
		while (tmp != NULL)
		{
			curr = tmp;
			tmp = tmp->next;
			free(curr);
		}
		*head = NULL;
	}
}
