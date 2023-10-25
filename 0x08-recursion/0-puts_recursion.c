#include "main.h"
/**
 * _puts_recurssion - recursive function to print to screen
 *
 * @s: pointer to the string
 *
 * Return: nothing
 */
void _puts_recurssion(char *s)
{
	if (*s != '\0')
	{
		_putschar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_-putchar('\n');
	}
}
