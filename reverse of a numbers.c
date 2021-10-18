/* reverse of a numbers */
#include<stdio.h>
void main()
{
	int n,r;
	printf("Enter a number.\n");
	scanf("%d",&n);
	while(n)
	{
		r=0;
		r=n%10;
		printf("%d",r);
		n/=10;
	}
}
