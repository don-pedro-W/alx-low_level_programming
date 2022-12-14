#include "main.h"

/**
 * _abs-prints the absolite value
 * @a: contains value
 * Return: value
 *
 */
int _abs(int a)
{
	int k = a;
	int absvalue;

	if (k < 0)
		k = k * (-1);
	absvalue = k;
	return (absvalue);
}
