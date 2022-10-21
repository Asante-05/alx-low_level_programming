#include "lists.h"
/**
 * print_list - prints elements of a linked list
 * @h: linked list
 * Return: number of elements in list
 */
size_t print_list(const list_t *h)
{
	size_t nodeNum = 0;
	const list_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		nodeNum++;
	}
	return (nodeNum);
}
