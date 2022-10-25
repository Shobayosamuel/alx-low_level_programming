#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 * @n: count
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
    listint_t *fake = h;
    size_t n = 0;
    while (fake != NULL)
    {
        printf("%lu", fake->n);
        n++;
        fake->next;
    }
    return (n);
}