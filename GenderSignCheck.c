//---------------------------------
// Question 4.
//purpose: This program takes a string of characters, specifically m\M and f\F and prints the gender sign 
//for every characters associated with its gender . 
//----------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main()
{
	int i = 0;
	int j;
	int k;
	int male = 0;
	int female = 0;

	char s[50];
	char c;


	printf("Enter a string of m (MALE) and f (FEMALE) : ");
	fgets(s, 50, stdin);

	while (c != '\n')
	{
		c = s[i];

		if (c == 'm' || c == 'M')
		{
			male++;
		}

		if (c == 'f' || c == 'F')
		{
			female++;
		}

		i++;
	}

	printf("MALE : ");
	j = 0;

	while (j < male)
	{
		printf("%c", 11);

		j++;
	}

	printf("\n");

	printf("FEMALE : ");
	k = 0;

	while (k < female)
	{
		printf("%c", 12);
		k++;
	}

	printf("\n\n");


	return 0;
	system("PAUSE");
}
