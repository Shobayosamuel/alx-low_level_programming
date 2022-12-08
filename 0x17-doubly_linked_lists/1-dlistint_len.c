#include "lists.h"

/**
 * dlistint_len - function to counts elements
 * @h: pointer to the head of the list
 * @num: counter
 *
 * Return: the number of nodes printed
 */

size_t dlistint_len(const dlistint_t *h)
{
    size_t num = 0;
    while (h)
    {
        num++;
        h = h->next;
    }
    return (num);
}
