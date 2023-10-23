#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees a linked list
 *
 * @head: A pointer to the first node in the list.
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
listint_t *ptr;

ptr = *head;

while (ptr != NULL)
{
	temp = ptr;
	ptr = ptr->next;
	free(temp);
}
*head = NULL;
}
