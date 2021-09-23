/* c program to find two numbers are equal */
#include<stdio.h>
void main()
{ 
    //Declaration
	int number1,number2;
	
	//Taking Input
	printf("Enter to numbers\n");
	scanf("%d %d",&number1,&number2);
	
	//Final Output
	if(number1==number2)
	{
		printf("Number1(%d) and Number2(%d) are equal",number1,number2);
	}
	else
	{
		printf("Number1(%d) and Number2(%d) are not equal",number1,number2);
	}
 } 
