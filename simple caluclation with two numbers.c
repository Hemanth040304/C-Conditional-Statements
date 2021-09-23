/* c program to find menu drive to perform simple calculation */
#include<stdio.h>
void main()
{
	//Declaration
	int item,n1,n2;
	float quo;
	
	//Taking input
	printf("Enter any two numbers \n");
	scanf("%d%d",&n1,&n2);
	printf("Enter a number (1-5)\n");
	scanf("%d",&item);
	 
	 quo=(n1/n2)*1.0;
	//output
	if(item==1)
	{
		printf("%d + %d = %d",n1,n2,n1+n2);
	}
	else if(item==2)    
	{
		printf("%d - %d = %d",n1,n2,n1-n2);
	}
	else if(item==3)
	{
		printf("%d * %d = %d",n1,n2,n1*n2);
	}
	else if(item==4)
	{
		printf("%d / %d = %.2f ",n1,n2,n1*1.0/n2);
	}
	else if(item==5)
	{
		printf("%d %c %d = %d",n1,37,n2,n1%n2);
	}
}
