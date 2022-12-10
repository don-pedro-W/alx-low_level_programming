#include <stdio.h>

/**
 *main- entry point for program
 *
 *Return: zero or non-zero value
 */

int main(void)
{
	/*Declarations goes here */
	int one;

	/*initialization goes here */
	one = 48;

	/*Code goes here */
	while (one <= 57)
	{
		putchar(one);
		one++;
	}
	putchar(10);

	return (0);

}
