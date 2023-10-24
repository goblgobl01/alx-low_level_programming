#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - Add a new node at the end of a linked list.
 * @head: A pointer to the head of the linked list.
 * @n: The integer that gonna be stored on the new node.
 *
 * Return: A pointer.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr;
listint_t *new;

if (*head == NULL)
{
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	*head = new;
	return (*head);
}
else
{
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	ptr->next = new;
	return (*head);
}

}
