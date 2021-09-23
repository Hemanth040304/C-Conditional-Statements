/* c program to find percentage and division from marks you give */
#include<stdio.h>
void main()
{
	//Declaration
	int roll_no,che,phy,cs,total;
	double per;
	
	//Taking input
	printf("Enter Roll Number and Marks of Chemistry,Physics,Computer Science\n");
	scanf("%d%d%d%d",&roll_no,&che,&phy,&cs);
	
	//caluclation
	total = che + phy + cs;
	per=total*1.0*100/300,
	
	//output
	printf("Roll Number:%d\n",roll_no);
	printf("Marks in Chemistry:%d\n",che);
	printf("Marks in Physics:%d\n",phy);
	printf("Marks in computer Science:%d\n",cs);
	printf("Total Marks:%d\n",total);
	printf("Percentage:%.2lf\n",per);
	printf("Division:");
	if(per>=80)
	{
		printf("First");
	}
	else if ((per>=70) && (per<=79))
	{
		printf("Second");
	}
	else if((per>=60) && (per<=69))
	{
		printf("Third");
	}
	else if((per>=50) && (per<=59))
	{
		printf("Fourth");
	}
	else
	{
		printf("Fail");
	}
}
