/* C program to find a number positive or negitive */
#include<stdio.h>
void main()
{
	//Declaration
	int number;
	
	//Input
	printf("Enter a Integer Number");
	scanf("%d",&number);
	 
	//Output
	if(number<0)
	{
		printf("Negitive");
    }
    else
    {
    	printf("Positive");
	}
}
