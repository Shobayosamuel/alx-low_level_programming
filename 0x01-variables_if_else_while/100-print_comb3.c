#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
    int i;
	for (num = 48; num < 58; num++)
	{
        for ( i = 48; i < 58; i++)
        {
           if(i>num) {
                putchar(i);
		        putchar(num);
                if (num != 56 || i != 57)
				{
					putchar(',');
					putchar(' ');
				}
           }
        }
       
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}