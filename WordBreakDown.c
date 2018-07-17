//---------------------------------
// Question 2.
//purpose: This program is designed to take a string from the user and then calculate the number of
//uppercase letters, digits, and vowels in that order and display them.
//----------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main()
{

	int upper = 0;
	int digit = 0;
	int vowel = 0;
	int i = 0;


	char s[30];
	char c;

	printf("Enter sentence: ");
	fgets(s, 30, stdin);


	while (c != '\n')
	{

		c = s[i];
		if (isalpha)
		{
			if (isupper(c))
			{
				upper++;
			}

			if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I'
				|| c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u' || c == 'Y' || c == 'y')
			{
				vowel++;
			}

		}

		if (isdigit(c))
		{
			digit++;
		}


		i++;
	}

	printf("\n");
	printf("Number of upper case letters............... %d", upper);
	printf("\n");
	printf("Number of digits................................... %d", digit);
	printf("\n");
	printf("Number of vowels................................. %d", vowel);
	printf("\n");


	return 0;
	system("PAUSE");
}
