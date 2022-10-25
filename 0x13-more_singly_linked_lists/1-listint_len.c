#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 * @count: count
 * @test: pseudo head
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
    const listint_t *test = h;
    size_t count = 0;
    while (test != NULL)
    {
        count++;
        test = test->next;
    }
    return (count);
}