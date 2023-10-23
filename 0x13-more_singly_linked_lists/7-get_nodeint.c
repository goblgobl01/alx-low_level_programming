#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *ptr;
unsigned int pos = 0;

ptr = head;
while(pos != index)
{
	ptr = ptr->next;
	pos++;
}
if (ptr == NULL)
	return (NULL);
else
	return(ptr);

}
