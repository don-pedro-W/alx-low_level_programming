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
	one = 0;

	/*Code goes here */
	while (one < 10)
	{
		printf("%d", one);
		one++;
	}
	printf("\n");

	return (0);

}
