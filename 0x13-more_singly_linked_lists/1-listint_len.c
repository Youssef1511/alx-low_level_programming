#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t z = 0;

	while (h)
	{
		z++;
		h = h->next;
	}

	return (z);
}

