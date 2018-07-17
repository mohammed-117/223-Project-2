//---------------------------------
// Question 3.
//purpose: This program uses the random number generator to generate numbers for addition. 
//It takes the input from the user, verifies if the given answer is correct\wrong and then informs the //user. The user is then asked to continue or not. The total amount of correct and incorrect answers is
//then later displayed.
//----------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main()
{

	int var1, var2, total;
	int choice;
	int correct = 0;
	int wrong = 0;
	char Con;

	printf("Lets practice addition with random integer numbers <100 \n\n");
	do
	{


		var1 = (rand() % 100);
		var2 = (rand() % 100);

		total = var1 + var2;

		printf("%d + %d = ? ", var1, var2);
		scanf("%d%*c", &choice);

		printf("\n");
		if (choice == total)
		{
			printf("CORRECT \n");
			correct++;
		}
		else if (choice != total)
		{
			printf("WRONG \n");
			wrong++;
		}

		printf("Continue(y/n)? ");
		scanf("%c%*c", &Con);
		printf("\n");

	} while (Con != 'n');

	printf("\n\n");

	printf("Number of Correct answers: %d \n", correct);
	printf("Number of Wrong answers: %d", wrong);


	return 0;
	system("PAUSE");
}
