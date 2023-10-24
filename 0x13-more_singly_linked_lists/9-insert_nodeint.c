#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ptr;
listint_t *new;
unsigned int i = 0;

ptr = *head;

if(idx == 0)
{
	new = malloc(sizeof(listint_t));
	if(new == NULL)
		return (NULL);
	new->next = *head;
	new->n = n;
	*head = new;
	return (*head);
}

else
{
	while(i != (idx - 1))
	{
		ptr = ptr->next;
		i++;
	}
	new = malloc(sizeof(listint_t));
	if(new == NULL)
		return (NULL);
	new->next = ptr->next;
	new->n = n;
	ptr->next = new;
	return (new);
}
}
