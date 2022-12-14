#include "main.h"

/**
 *print_alphabet - prints all alphabet
 *
 * Return: 1 if error, 0 if none
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}

}
