#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Get the node at a specific index in a linked list
 * @head: Pointer to the head of the linked list
 * @index: The index of the node to retrieve
 *
 * Return: If the node at the given index exists.
 */
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
