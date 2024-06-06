#include <stdio.h>
#include "header.h"

double div_(double a, double b)
{
	if (b == 0)
	{
		printf("Error: division by zero!");
		return 0;
	}

	return a / b;
}