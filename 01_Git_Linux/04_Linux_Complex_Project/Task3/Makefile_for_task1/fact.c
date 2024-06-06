#include <stdio.h>
#include "header.h"

int fact_(int n)
{
	if (n == 0)
	{
 		return 1;
	}

	return n * fact_(n-1);
}
