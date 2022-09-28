#include "main.h"
/**
 * _puts_recursion - prints the strings
 * 
 * @s: recieves a variable
 * @i: temporary variable for incrementing
 */
void _puts_recursion(char *s)
{
    int i = 0;
    while (s[i] != "\0" && s[i] != '\n')
    {
        _putchar(s[i]);
        i++;
    }
}