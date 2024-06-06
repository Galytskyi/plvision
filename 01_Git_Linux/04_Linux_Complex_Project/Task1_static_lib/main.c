#include <stdio.h>
#include <stdlib.h>
#include "header.h"


int main()
{
	int type;

	printf("Select type of operation for calculation: \n");
	printf("sum - 0\n");
	printf("diff - 1\n");
	printf("mul - 2\n");
	printf("div - 3\n");
	printf("fact - 4\n");
	printf("sqrt - 5\n");

	printf("\nEnter type of operation for calculation: ");
	scanf("%i", &type);

	switch(type) 
	{
		case 0:
		{
			int a0;
			int b0;

			printf("Enter first number to calculate sum: ");
			scanf("%d", &a0);
			printf("Enter second number to calculate sum: ");
			scanf("%d", &b0);

			printf("%d + %d = %d\n", a0, b0, sum_(a0,b0));
		}
		break;

		case 1:
		{
			int a1;
			int b1;

			printf("Enter first number to calculate diff: ");
			scanf("%d", &a1);
			printf("Enter second number to calculate diff: ");
			scanf("%d", &b1);

			printf("%d - %d = %d\n", a1, b1, diff_(a1,b1));
		}
		break;

		case 2:
		{
			double a2;
			double b2;

			printf("Enter first number to calculate mul: ");
			scanf("%lf", &a2);
			printf("Enter second number to calculate mul: ");
			scanf("%lf", &b2);

			printf("%f * %f = %f\n", a2, b2, mul_(a2,b2));
		}
		break;

		case 3:
		{
			double a3;
			double b3;

			printf("Enter first number to calculate div: ");
			scanf("%lf", &a3);
			printf("Enter second number to calculate div: ");
			scanf("%lf", &b3);

			printf("%f / %f = %f\n", a3, b3, div_(a3,b3));
		}
		break;

		case 4:
		{
			int f;

			printf("Enter the number to calculate the factorial: ");
			scanf("%d", &f);

			if (f == 0) 
			{
				printf("fact = 1\n");
				break;
			}

			printf("fact(%d)= %d\n",f, fact_(f));
		}
		break;

		case 5:
		{
			double n;

			printf("Enter the number to calculate the sqrt: ");
			scanf("%lf", &n);

			if (n < 0) 
			{
				printf("Error: wrong arg of sqrt!\n");
				break;
			}

			printf("sqrt(%f)= %f\n",n, sqrt_(n));
		}
		break;

		
		default:
			printf("Error: wrong type of operation!");
	
	}

	return 0;
}
