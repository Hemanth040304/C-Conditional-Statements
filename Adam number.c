/* Adam number */
#include<stdio.h>
void main()
{
	int number,r,k,j,square,numberReverse=0,squareOfreverse,temp=0;
	printf("Enter a number.\n");
	scanf("%d",&number);
	square=number*number;
	j=number;
	while(j)
	{
		r=j%10;
		numberReverse=numberReverse*10+r;
		j/=10;
	}
	squareOfreverse=numberReverse*numberReverse;
	while(squareOfreverse)
	{
		k=squareOfreverse%10;
		temp=temp*10+k;
		squareOfreverse/=10;
	}
	if(square==temp)
	{
		printf("%d is a Adam number.\n",number);
	}
	else
	{
		printf("%d is not a Adam number.",number);
	}
}
