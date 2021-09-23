/* c program to find largest number in three numbers */
#include<stdio.h>
void main()
{
	//Declaration
	int number1,number2,number3;
	 
	 //Taking input
	printf("Enter three numbers\n");
	scanf("%d%d%d",&number1,&number2,&number3);
	
	//output
	if((number1>number2) && (number1>number3))
	{
		printf("Number1(%d) is Larger than Number2(%d) and Number3(%d)",number1,number2,number3);
	}
	else 
	{
	    if((number2>number1) && (number2>number3))
        {
        printf("Number2(%d) is Larger than Number1(%d) and Number3(%d)",number2,number1,number3);	
		}
     	else if((number3>number2) && (number3>number1))
    	{
		printf("Number3(%d) is Larger than Nmber1(%d) and Number2(%d)",number3,number1,number2);
    	}
    }
}
