#include "lists.h"

/**
 * print_dlistint - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * @num: increaments
 * Return: the number of nodes printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	while (h != NULL)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
