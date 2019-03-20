#include <stdio.h>  
#include <math.h>
#include <string.h>  
   
int convert(char hex[])
{
	//An array hex convert is set up in order to store the values for each hexadecimal digit
	char hexconvert[17] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
      '9', 'A', 'B', 'C', 'D', 'E', 'F', '\0'};
	
    int len, count, value, position=0, dec=0;
	
	//This if statement is used to check if the inputed hexadecimal is negative and simply turns its positive equivilent positive by adding a '-'.
	if(hex[0]=='-')
		printf("-");
	
	//The length of string hex is calculated using strlen and 1 is taken away to account for '\0'. 1 is then taken away each time to reach the next element in the string
    for(len=strlen(hex)-1; len >= 0; len--) 
	{
		//This for loop goes through number 1 to 15 to check if any elements in the string hex match with any of the elements in array hexconvert.
        for(count=0; count<=15; count++)
		{
			//If the loop reaches an equivilent element then the current value of count corresponds with the numerical value of the digit
            if(hex[len] == hexconvert[count])
			{
				//A simple Hexadecimal conversion is then used on each digit in the hexadecimal number and totaled up to find the equivilent decimal number
                dec = dec + count*pow(16, position);
            }
        }
		//1 is added to position for each new element in the string to account for the position of the digit in the hexadecimal
        position++;
    }  
  
    printf("%d\n", dec); 
}

int main() 
{  
	//The function convert is used to pass strings into an array
    convert("FF");
	convert("10");
	convert("ABC");
	convert("C2");
	convert("-AB");
    return 0;  
}

