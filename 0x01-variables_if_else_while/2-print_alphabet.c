#include <stdio.h>

/**
 * main - prints alphabets in lower case
 * newline
 * returns 0
 */
int main(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
	{
		putchar(lett);
	}
	putchar('\n');
	return (0);
}
