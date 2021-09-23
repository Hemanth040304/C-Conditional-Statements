/* c program to find Current Bill units given by you */
#include<stdio.h>
void main()
{
	//Declaration
	int cus_id,units;
	double amount,surcharge=0.00,net;
	
	//Taking input
	printf("Enter customer id and Units\n");
	scanf("%d%d",&cus_id,&units);

	if(units<=199)
	{
		amount = units*1.20;
	}
	else if(units>199 && units<400)
	{
		amount = units*1.50;
	}
	else if(units>399 && units<600)
	{
		amount = units*1.80;
	}
	else if(units>599)
	{
		amount = units*2.00;
    }
    if(amount>400)
    {
    	surcharge = amount*15/100;
	}
    net=amount+surcharge;
	
	//printing 
	printf("Customer id:%d\n",cus_id);
	printf("Units Consumed:%d\n",units);
	printf("Amount Charges:%.2lf\n",amount);
	printf("Surcharge amount:%.2lf\n",surcharge);
	printf("Net amount paid by the customer:%.2lf",net);
}
