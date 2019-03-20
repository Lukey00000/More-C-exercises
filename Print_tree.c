#include<stdio.h>

int tree(int width, int trunk)
{
	int spacetri=1;
	int shapetri=1;
	int counttri=0;
	//The number of rows of the tree are caluculated using the width
	int rowtri=(width+1)/2;
	spacetri=rowtri;
	//This part of the program prints the triangle part of the tree
	//This for loop is used to print the required amount of rows needed by the top half of the tree as it finishes after hitting the value of variable 'rowrti'
	for(shapetri=1; shapetri<=rowtri; shapetri++)
	{
		//This for loop is used to indent the '*'s based on the row it is in.
		for(counttri=1; counttri<spacetri; counttri++)
			printf(" ");
		
		spacetri--;
		//This for loop is used to print the correst number of '*'s dependent on the loop in which it is executed. -1 is used to ensure an odd number of '*'s is printed everytime
		for(counttri=1;counttri<=2*shapetri-1; counttri++)
			printf("*");
		
		printf("\n");
	}
	
	int rowrec=trunk;
	int columnrec=3;
	int shaperec=1;
	int countrec=0;
	//The amount of spaces needed to centre the trunk of the tree is calculated using variable 'indent' 
	int indent=(width-3)/2;
	//This part of the program prints the rectangle 'trunk' of the tree
	//This for loop is used to calculate the lenght of the trunk as it stops printing rows once it hits the value of variable 'rowrec'
	for(shaperec=1; shaperec<=rowrec; shaperec++)
	{
		//A for loop is set up to indent the trunk based on the width of the triangle part of the tree as a space is printed
		for(countrec=1; countrec<=indent; countrec++)
			printf(" ");
		//This for loop prints '*' until it hits 3 (the requested width of the trunk)
		for(countrec=1; countrec<=columnrec; countrec++)
			printf("*");
		
		printf("\n");
	}
}
	
	
int main()
{
	//The function tree is used to pass corresponding values for the width of the triangle part of the tree and the length of the trunk
	tree(9,4);
	tree(5,2);
	tree(11,6);
	return 0;	
}