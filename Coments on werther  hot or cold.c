/* c program to read temperature in centigrade and display suitable message according to temperature */
#include<stdio.h>
void main()
{
	//Declaration 
	int temp;
	
	//Taking input
	printf("Enter the Temperature in Centigrade\n");
	scanf("%d",&temp);
	
	//output
	if(temp<0)
	{
		printf("Freezing Weather");
	}
	else if((temp>=0)  &&  (temp<=9))
	{
	    printf("Very Cold Weather");
	}
	else if((temp>=10)  &&  (temp<=19))
	{
		printf("Cold Weather");
	}
	else if((temp>=20)  &&  (temp<=29))
	{
		printf("Normal Weather");
	}	
	else if((temp>=30)  &&  (temp<=39))
	{
		printf("Hot weather");
	}
	else if(temp>=40)
	{
		printf("Very Hot Weather");
		}	
}
