/* c program to Decrypt a message */
#include<stdio.h>
void main()
{
	//Declaration
	int number1,number2,number3;
	
	//Input
	printf("Enter three numbers from 1-27\n");
	scanf("%d %d %d",&number1,&number2,&number3);
	
	//Output
	printf("%c%c%c",95+number1,95+number2,95+number3);
	
}
