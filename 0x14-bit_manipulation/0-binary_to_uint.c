#include "main.h"
/**
 * binary_to_uint - converts binary int to unsigned integers
 * @b: is the string
 * 
 * @n: is the number
 * @i: increments
 * @return unsigned int 
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int n = 0;
    int i = 0;
    if (!b)
    {
        return (0);
    }
    for (i = 0; i != b['/0']; i++)
    {
        if (b[i] != '0' || b[i] != '1')
        {
            return (0);
        }
    for (i = 0; b[i] != '\0'; i++)
	{
		n <<= 1;
		if (b[i] == '1')
			n += 1;
	}
	return (n);
        
    }
    
}