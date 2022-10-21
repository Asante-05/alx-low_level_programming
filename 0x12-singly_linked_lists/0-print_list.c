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
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
		tmp = tmp->next;
		nodeNum++;
	}
	return (nodeNum);
}
