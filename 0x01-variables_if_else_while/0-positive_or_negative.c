#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-  entry point for program
 *
 * Return: zero or no-zero for error or no error
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
