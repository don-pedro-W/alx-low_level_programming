#include <stdio.h>

/**
 *main- entry point for program
 *
 *Return: zero or non-zero value
 */

int main(void)
{
	/*Declarations goes here */
	int hex;
	char hex_alpha;

	/*initialization goes here */
	hex = 48;
	hex_alpha = 'a';

	/*Code goes here */
	while (hex <= 63)
	{
		if (hex >= 58 && hex <= 63)
			putchar(hex_alpha++);
		else
			putchar(hex++);
	}
	putchar(10);

	return (0);

}
