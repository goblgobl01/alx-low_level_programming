#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
list_t *ptr;
list_t *new;

if (*head == NULL)
{
	new = malloc(sizeof(size_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->str = strdup(str);
	new->len = strlen(str);
	*head = new;
	return (*head);
}
else
{
ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	new = malloc(sizeof(size_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->str = strdup(str);
	new->len = strlen(str);
	ptr->next = new;
	return (*head);
}

}
