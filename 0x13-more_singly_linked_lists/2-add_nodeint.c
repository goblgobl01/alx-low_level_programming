#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a linked list.
 * @head: A pointer to the pointer to the head of the list.
 * @n:a new variable thats gonna be added.
 *
 *
 * Return:a pointer.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
	return (NULL);
new->n = n;

new->next = *head;
*head = new;

return (*head);
}
