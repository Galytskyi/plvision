#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header.h"


int main()
{
	int type;

	printf("Select type of operation for text: \n");
	printf("to low - 0\n");
	printf("to uper - 1\n");

	printf("\nEnter type of operation for calculation: ");
	scanf("%i", &type);

	if (type < 0 || type >= 2)
	{
		printf("Error: wrong type of operation!\n");
		return 0;
	}

	char str[255];

	printf("Enter string: ");
	scanf("%s", str);

	int len = strlen(str);
	if (len == 0)
	{
		printf("Wrong string!\n");	
		return 0;
	}

	switch(type) 
	{
		case 0:	printf("Output low string: %s\n", low(str, len));
			break;
		case 1:	printf("Output uper string: %s\n", uper(str, len));
			break;
	}

	return 0;
}
