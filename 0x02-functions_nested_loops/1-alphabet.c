#include "main.h"

/**
 *print_alphabet - prints all alphabet
 *
 * Return: 1 if error, 0 if none
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');

}
