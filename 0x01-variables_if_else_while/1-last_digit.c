#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main- entry point of program
 *
 * Return: zero or non-zero value
 */

int main(void)

{
	int n, Last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_digit = n % 10;
	/* your code goes there */
	printf("Last digit of %d is %d ", n, Last_digit);
	if (Last_digit > 5)
		printf("and is greater than 5\n");
	if (Last_digit == 0)
		printf("and is 0\n");
	if (Last_digit < 6 && Last_digit != 0)
		printf("and is less than 6 and not 0\n");
	return (0);

}
