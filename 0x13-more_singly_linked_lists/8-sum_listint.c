#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int sum_listint(listint_t *head)
{
listint_t *ptr;
int sum = 0;

ptr = head;
if(head == NULL)
	return (0);
else
{
while(ptr->next != NULL)
{
	sum = sum + ptr->n;
	ptr = ptr->next;
}
sum = sum + ptr->n;
return (sum);
}
}
