#include<stdio.h>

int forloop(int n)
{
	int count=1;
	int factorial=1;
	
	
	// The number n is passed through the function with count adding 1 to itself untill it reaches the value of n.
	for(count=1; count<=n; count++)
		// Every loop the factorial is multiplied by the previous value of factorial and the new value for count until count reaches the value of n. This give the factorial of n.
		factorial=factorial*count;
	
	printf("%d\n",factorial);
	
}

int whileloop(int n)
{
	int factorial=1;
	int count=1;
	
	//A while loop is set up and for the variable count and will end once count reaches the same value as n.
	while(count<=n)
	{
		//Every loop the factorial is multiplied by the previous value of factorial and the new value for count until count reaches the value of n. This give the factorial of n. This is the same equation which was used in the 'for loop'.
		factorial=factorial*count;
		count++;
	}
	
	printf("%d\n",factorial);
}

int main()
{
	//The function forloop is used to pass values in order to calculate the factorial using a 'for loop'.
	forloop(1);
	forloop(2);
	forloop(4);
	forloop(5);
	forloop(8);
	//The function whileloop is used to pass values in order to calculate the factorial using a 'while loop'.
	whileloop(1);
	whileloop(2);
	whileloop(4);
	whileloop(5);
	whileloop(8);
	return 0;	
}

