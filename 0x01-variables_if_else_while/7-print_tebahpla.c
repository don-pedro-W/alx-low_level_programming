#include <stdio.h>

/**
 *main- entry point for program
 *
 *Return: zero or non-zero value
 */

int main(void)
{
	/*Declarations goes here */
	char z;

	/*initialization goes here */
	z = 'z';

	/*Code goes here */
	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar(10);

	return (0);

}
