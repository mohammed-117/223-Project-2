//---------------------------------
// Question 5.
//purpose: This program loops through a while loop to print a upside down right triangle, right triangle,
//right triangle facing left, upside down right triangle facing left.
//----------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>



int main()
{
	int n = 5;
	int a, b, s, x;
	//**************************************
	printf("a. \n\n");
	for (a = n; a > 0; a--)
	{

		for (b = 1; b <= a; b++)
		{
			printf("*");
		}

		printf("\n");
	}

	printf("\n\n");
	//***************************************
	printf("b. \n\n");
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("*");
		}

		printf("\n");
	}
	printf("\n\n");
	//***************************************
	printf("c. \n\n");
	for (a = 1; a <= n; a++)
	{
		for (s = n - a; s > 0; s--)
		{
			printf(" ");
		}

		for (x = 1; x <= a; x++)
		{
			printf("%d", x);
		}
		printf("\n");
	}
	printf("\n\n");
	//**************************************
	printf("d. \n\n");
	for (a = 1; a <= n; a++)
	{
		for (s = 1; s <= a; s++)
		{
			printf(" ");
		}

		for (x = 5; x >= a; x--)
		{
			printf("%d", a);
		}
		printf("\n");
	}
	printf("\n\n");


	printf("\n\n");

	return 0;
	system("PAUSE");
}
