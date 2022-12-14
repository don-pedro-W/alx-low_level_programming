#include "main.h"

/**
 * _islower - returns 1 if lowercase, else returns 0
 *
 * Return - on success 1
 */

int _islower(int c)
{
	int r = 0, i;

	for (i = 97; i < 123; i++)
	{
		if (c == i)
		{
			r = 1;
			break;
		}
	}

	return (r);
}

