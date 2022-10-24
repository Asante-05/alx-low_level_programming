#include "lists.h"
/**
 * sum_listint - adds the all data element of a linked list
 * @head: the head of the node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
