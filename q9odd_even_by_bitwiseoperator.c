	//Check if a number is even or odd (using bitwise operators).
	#include<stdio.h>
	int main ()  {

		int n;
		printf("enter a number:");
	  scanf("%d",&n);
		 
		if((n&1)==0)
		printf("no. is even");

		else 
		printf("no. is odd");

		return 0;

	}