/* Largest Digit */
#include<stdio.h>
void main()
{
	int number,largestDigit=0,compare;
	printf("Enter a number.\n");
	scanf("%d",&number);
	while(number)
	{
		compare=number%10;
		if(largestDigit<compare)
		{
			largestDigit=compare;
		}
		number/=10;
	}
	printf("Largest Digit: %d.",largestDigit);
}
