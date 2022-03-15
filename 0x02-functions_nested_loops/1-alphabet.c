Â#include "main.h"
/**
 *print_alphabet - prints letter a-z
 *Description: Prints all letters in lowercase followed by a new line
 *
 *Return: Always 0.
 */
void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++);
	{
		_putchar(ch);
	}
	_putchar('\n');
}
