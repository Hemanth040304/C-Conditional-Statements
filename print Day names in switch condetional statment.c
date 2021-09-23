/* C Program to print Day names in switch conditional statment */
#include<stdio.h>
void main()
{
	//Declaration
	int choice;
	
	//Taking Intput
	printf("Enter your choice(from 1-7)\n");
	scanf("%d",&choice);
	
	//Output
	switch(choice)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:		
	    	printf("Sunday");
	    	break;
	    default :
	    printf("Invaled");
	    break;
		
	}
}
