/* c program to accept a grade and declare equivalent description */
#include<stdio.h>
void main()
{
	//Declaration
	char c;
	
	//Taking Input
	printf("Enter a Grade from (E,V,G,A,F)\n");
	scanf("%c",&c);
	
	//Output
	if(x=='E')
	{
		printf("Excellent");
	}
	else if(x=='V')
	{
		printf("Very Good");
	}
	else if(x=='G')
	{
		printf("Good");
	}
	else if(x=='A')
	{
		printf("Average");
	}
	else if(x=='F')
	{
		printf("Fail");
	}
	else
	{
		printf("Enter a Grade");
	}
}
