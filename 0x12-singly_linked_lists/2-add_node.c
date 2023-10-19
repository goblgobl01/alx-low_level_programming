#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


list_t *add_node(list_t **head, const char *str)
{
list_t *new;

new = malloc(sizeof(list_t));
new->str = strdup(str);

new->next = head;
head = new;

if(head == NULL)
	return (NULL);
else
	return (new);
}
