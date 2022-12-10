#include <stdio.h>

/**
 *main- entry point for program
 *
 *Return: zero or non-zero value
 */

int main(void)
{
	/*Declarations goes here */
	char alpha;

	/*initialization goes here */
	alpha = 'a';

	/*Code goes here */
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar(10);
	return (0);

}
