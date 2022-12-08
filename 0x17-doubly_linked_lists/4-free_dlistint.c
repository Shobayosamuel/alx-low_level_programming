#include "lists.h"
/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 */

void free_dlistint(dlistint_t *head)
{
    dlistint_t *curr = head;
    dlistint_t *temp;
    while (curr != NULL)
    {
        temp = curr;
        curr = curr->next;
        free(curr);
    }
    head = NULL;
}
