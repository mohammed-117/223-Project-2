//---------------------------------
// Mohammed Hassnain
// cpsc 223c
// Sept 10th, 2015
// Project No.2
// Question 1.
// purpose: this program is designed to convert the currency entered from dollars 
// to yen, pound, euro. The second input allows you to enter at what number you want to stop 
//converting and the third input allows you to jump a certain number after the first conversion and then
//for upcoming conversions as well.
//----------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define DOLLAR 1.00
#define YEN 119.44
#define POUND 0.66
#define EURO 0.90


int main()
{

	int i;
	int j;
	char a;

	int start, finish, jump;

	float tyen, tpound, teuro;

	printf("Please enter the table info(start,finish, finish) :");
	scanf("%d %d %d", &start, &finish, &jump);

	printf("%4c", 36);
	printf("%7c", 157);
	printf("%6c", 156);
	printf("%6c", 128);
	printf("\n");

	for (i = 1; i < 27; ++i)
	{
		printf("%c", 205);
	}

	for (j = start; j <= finish; j = j + jump)
	{

		// tyen is total yen,tpound is total pound, teuro is total euro
		// each currency total is after conversion

		tyen = (float)j * YEN;
		tpound = (float)j * EURO;
		teuro = (float)j * POUND;

		printf("\n");
		printf("%5.2f %5.2f %5.2f %5.2f", (float)start, tyen, tpound, teuro);
		printf("\n");

		start += jump;

	}


	printf("\n\n\n");
	printf("Program done. ");



	return 0;
	system("PAUSE");
}
