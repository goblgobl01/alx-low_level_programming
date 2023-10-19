#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


list_t *add_node(list_t **head, const char *str)
{
list_t *new;

new = malloc(sizeof(list_t));
if(new == NULL)
	return (NULL);

new->str = strdup(str);
if(new->str == NULL)
{
	free(new->str);
	return (NULL);
}

new->next = *head;
*head = new;

if(head == NULL)
	return (NULL);
else
	return (new);
}
