#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Frees a
 *
 * @head: A pointer to the first node in the list.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
listint_t *ptr;
int data;

temp = ptr = *head;

if (*head == NULL)
	return (0);

else
{
	ptr = temp->next;
	data = temp->n;
	free(temp);
	*head = ptr;
	return (data);
}
}
