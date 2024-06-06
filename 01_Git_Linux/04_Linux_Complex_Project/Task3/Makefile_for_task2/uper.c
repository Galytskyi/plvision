#include <ctype.h>
#include "header.h"

char* uper(char* str, int len)
{
	for(int i = 0; i < len; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}

	return str;
}
