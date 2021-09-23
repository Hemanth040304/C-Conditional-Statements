/* c program to read a integer "n" and display '1' if "n" is larger than '0', '0' when "n" is '0' and '-1' when "n" is less than '0' */
#include<stdio.h>
void main()
{
	//Declaration
	int n;
	
	//Taking input
	printf("Enter a Integer Number\n");
	scanf("%d",&n);
	
	//Output
	if(n>0)
	{
		printf("1");
	}
	else if(n<0)
	{
		printf("-1");
	}
	else
	{
		printf("0");
	}
	
}

