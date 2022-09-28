#include "main.h"
/**
 * _puts_recursion - prints the strings
 * 
 * @s: recieves a variable
 * @i: temporary variable for incrementing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}