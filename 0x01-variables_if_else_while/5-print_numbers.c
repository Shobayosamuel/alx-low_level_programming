#include <stdio.h>

/**
 * main - prints single digits from 0-10
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
    {
        printf("%d", num);
        num++;
    }
    
	putchar('\n');
	return (0);
}