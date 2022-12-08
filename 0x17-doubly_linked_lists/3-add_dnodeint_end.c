#include "lists.h"
 /**
  * add_dnodeint_end - function to add node to the end
  * @head: head of the linked list
  * @n: value to be added
  * Return: The address of the node or NULL if it fails
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    dlistint_t *curr;
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;
    new_node->next = NULL;
    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return (new_node);
    }
    curr = *head;
    while (curr->next)
    {
        curr = curr->next;
    }
    curr->next = new_node;
    new_node->prev = curr;
    return (new_node);
}
