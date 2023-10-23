#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees a linked list
 *
 * @head: A pointer to the first node in the list.
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
	temp = head;
	head = head->next;
	free(temp);
}
}
