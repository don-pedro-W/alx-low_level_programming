#include <stdio.h>

/**
 *main- entry point for program
 *
 *Return: zero or non-zero value
 */

int main(void)
{
	/*Declarations goes here */
	char a;

	/*initialization goes here */
	a = 'a';

	/*Code goes here */
	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
			putchar(a);
		a++;
	}
	putchar(10);
	return (0);

}
