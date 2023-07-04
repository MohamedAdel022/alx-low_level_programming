#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @sg: string to print
 */
void _puts_recursion(char *sg)
{
	if (*sg == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*sg);
	_puts_recursion(sg + 1);
}
