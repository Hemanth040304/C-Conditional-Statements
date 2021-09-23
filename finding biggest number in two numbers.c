/* c program to find biggest number of two numbers */
#include<stdio.h>
void main()
{
	//Declaration
	int number1,number2;
	
	//Taking input
	printf("Enter two numbers\n");
	scanf("%d %d",&number1,&number2);
	
	//Output
	if(number1<number2)
	{
		printf("%d is the bigger than %d",number2,number1);
	}
	else if(number1>number2)
	{
		printf("%d is the bigger than %d",number1,number2);
	}
	else
	{
		printf("Both number1(%d) and number2(%d) are equal",number1,number2);
	}
}
