#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - it count the number of element
 *
 * @h: A pointer to the head of the list
 *
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
int count = 0;

if (h == NULL)
	return (0);

while (h != NULL)
{
	count++;
	h = h->next;
}
return (count);
}
