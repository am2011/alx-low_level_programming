#include "main.h"
/**
 * positive_or_negative - check if int is positive or negative
 *
 * @i: int can be positive or negative.
 */
void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}

}
