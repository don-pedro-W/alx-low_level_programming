#include <stdio.h>

/**
 *main- entry point for program
 *
 *Return: zero or non-zero value
 */

int main(void)
{
	/*Declarations goes here */
	char a, A;

	/*initialization goes here */
	a = 'a';
	A = 'A';

	/*Code goes here */
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar(10);

	return (0);

}
