/* c program to read a digit, and display it in words */
#include<stdio.h>
void main()
{
	//Declaration
	int n;
	
	//Taking input
	printf("Enter a digit\n");
	scanf("%d",&n);
	
	//Output
	if(n==1)
	{
		printf("One");
	}
	else if(n==2)
	{
		printf("Two");
	}
	else if(n==3)
	{
		printf("Three");
	}
	else if(n==4)
	{
		printf("Four");
	}
	else if(n==5)
	{
		printf("Five");
	}
	else if(n==6)
	{
		printf("six");
	}
	else if(n==7)
	{
		printf("Seven");
	}
	else if(n==8)
	{
		printf("Eight");
	}
	else if(n==9)
	{
		printf("Nine");
	}
	else
	{
		printf("Enter a digit not a number");
	}
}
