/* c program to find percentage and total from marks */
#include<stdio.h>
void main()
{
	//Declaration
	int roll_number,physics,chemistry,computer_science,sum;
	double per;
	
	//Taking input
	printf("Enter Roll Number,Marks in Physics,Marks in Chemistry,and Marks in Computer Science.\n");
	scanf("%d %d %d %d",&roll_number,&physics,&chemistry,&computer_science);
	
	//output
	printf("Roll Number: %d\n",roll_number);
	printf("Marks in Physics: %d\n",physics);
	printf("Marks in Chemistry: %d\n",chemistry);
	printf("Marks in Computer Science: %d\n",computer_science);
	sum=physics+chemistry+computer_science;
	printf("Total Marks: %d\n",sum);
	per=sum*1.0*100/300;
	printf("Percentage: %.2lf\n",per);
	if(per>=80)
	{
		printf("Division: First");
	}
	else
	{
		if((per>=70) && (per<=79))
		{
			printf("Division: Second");
		}
		else if((per>=60) && (per<=69))
		{
			printf("Division: Third");
		}
		else if((per>=50) && (per<=59))
		{
			printf("Division: Fourth");
		}
		else if(per<=49)
		{
			printf("Division: Fail");
		}
	}
}
