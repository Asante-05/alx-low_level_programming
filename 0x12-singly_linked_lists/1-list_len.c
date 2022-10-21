#include "lists.h"
/**
 * print_list - prints elements of a linked list
 * @h: linked list
 * Return: number of elements in list
 */
size_t print_list(const list_t *h)
{
	size_t nodeNum;

	nodeNum = 0;

	while (h != NULL)
	{
		h = h->next;
		nodeNum++;
	}
	return (nodeNum);
}
