#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a linked list of strings
 *
 * @h: A pointer to the head of the list
 *
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
int count = 0;

if (h == NULL)
	return (0);

while (h != NULL)
{
	printf("%d\n", h->n);
	count++;
	h = h->next;
}
return (count);
}
