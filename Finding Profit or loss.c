/* c program to find profit and loss on a transaction */
#include <stdio.h>
void main()
{
	//Declaration
	int number1,number2;
	
	//Taking input
	printf("Enter to values\n");
	scanf("%d %d",&number1,&number2);
	
	//Output
	if(number1<number2)
	{
		printf("Profit: %d",number2-number1);
	}
	else if(number1>number2)
	{
		printf("Loss: %d",number1-number2);
	}
	else
	{
		printf("No Profit or Loss");
	}
}
