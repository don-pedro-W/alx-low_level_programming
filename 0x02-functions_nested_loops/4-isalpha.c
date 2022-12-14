#include "main.h"

/**
 * _isalpha - returns true for alphabetic characters
 * @c: integer value of character
 *
 * Return: 0 if not alpha, else 1
 */

int _isalpha(int c)
{
	int r = 0, i, j;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
		{
			r = 1;
			break;
		{
	}
	
	for (j = 97; j <= 122; j++)
	{
		if (c == j)
		{
			r = 1;
			break;
		}
	}
	
	return (r);

}	
