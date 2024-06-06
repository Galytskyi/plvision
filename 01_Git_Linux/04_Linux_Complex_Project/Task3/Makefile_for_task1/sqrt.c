#include <stdio.h>
#include <math.h>

#include "header.h"

double sqrt_(double n)
{
	double left = 0, right = n + 1;

  	for (int i = 0; i < 20; i++) 
	{
		double middle = (left + right) / 2;
	    	if (middle * middle < n) 
		{
      			left = middle;
    		} 
		else 
		{
      			right = middle;
    		}
  	}

  	return left;
}