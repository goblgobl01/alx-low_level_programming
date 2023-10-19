#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int len = 0;

while(str[len] != '\0')
	len++;

new = malloc(sizeof(list_t));
if(new == NULL)
	return (NULL);

new->str = strdup(str);
new->len = len;

new->next = *head;
*head = new;

return(*head);
}
