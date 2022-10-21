#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * @i: increments
 * 
 * @return size_t 
 */
size_t print_list(const list_t *h)
{
    size_t i = 0;
    while (h)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)");
        }else
        {
            printf("[%u] %s", h->len, h->str);
        }
        h = h->next;
        i++;
    }
    return (i);
}