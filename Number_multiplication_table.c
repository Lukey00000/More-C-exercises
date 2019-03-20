
#include <stdio.h>


int table(int x)
{
	//A 2d array is set up in order to store values up to 12x12. 
	int TimesTable[12][12] = { {1,2,3,4,5,6,7,8,9,10,11,12}, {1,2,3,4,5,6,7,8,9,10,11,12} };
	int b;
    
	//This for loop is used to print the first 5 values in the multiplication table as it stops once b==5
    for (b = 1; b <=5; ++b) 
	{
		//This multiplies the value of x through the 2d array and obtaines a multiple for the number x
        TimesTable[x-1][b] = x*b;
		//This if satement causes there to be ',' after each value printed apart from the final value which does not print a ','. This is carried out by the else statement.
		if(b<=4)
			printf("%5d,", x*b);
		else
			printf("%5d", x*b);
    }
    printf("\n");
    
}

int main()
{
	//The function table is used to pass values to create that numbers multiplication table
	table(5);
	table(3);
	table(8);
    return 0;
}
