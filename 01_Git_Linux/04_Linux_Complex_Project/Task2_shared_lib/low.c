#include <ctype.h>
#include "header.h"

char* low(char* str, int len)
{
	for(int i = 0; i < len; i++)
	{
		if (isupper(str[i]))
		{
			str[i] = tolower(str[i]);
		}
	}

	return str;
}

