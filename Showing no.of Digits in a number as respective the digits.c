/* Showing no.of Digits in a number as respective the digits */
#include<stdio.h>
void main()
{
	long long number,temp;
	int one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,zero=0,r;
	scanf("%lld",&number);
	temp=number;
	while(temp)
	{
		r=0;
		r=temp%10;
		if(r==1)
		{
			one++;
		}
		else if(r==2)
		{
			two++;
		}
		else if(r==3)
		{
			three++;
		}
		else if(r==4)
		{
			four++;
		}
		else if(r==5)
		{
			five++;
		}
		else if(r==6)
		{
			six++;
		}
		else if(r==7)
		{
			seven++;
		}
		else if(r==8)
		{
			eight++;
		}
		else if(r==9)
		{
			nine++;
		}
		else if(r==0)
		{
			zero++;
		}
		temp=temp/10;
	}
	printf("'1' Digits in number %d = %d\n'2' Digits in number %d = %d\n'3' Digits in number %d = %d\n",number,one,number,two,number,three);
	printf("'4' Digits in number %d = %d\n'5' Digits in number %d = %d\n'6' Digits in number %d = %d\n",number,four,number,five,number,six);
	printf("'7' Digits in number %d = %d\n'8' Digits in number %d = %d\n'9' Digits in number %d = %d\n",number,seven,number,eight,number,nine);
	printf("'0' Digits in number %d = %d",number,zero);
}
