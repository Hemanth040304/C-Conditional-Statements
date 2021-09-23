/* C Prograam for Arithmetic Operations and Relationl Operators */
#include<stdio.h>
void main()
{
	//Declaration
	int number1=23, number2=17;
	
	//Output
	printf("Arithetic Operation:\n");
	printf("Addtion: %d+%d =%d\n",number1,number2,number1+number2);
	printf("Sudtraction: %d-%d =%d\n",number1,number2,number1-number2);
	printf("Multiplication: %d*%d =%d\n",number1,number2,number1*number2);
	printf("Divition: %d/%d =%d\n",number1,number2,number1/number2);
	printf("Modulo Divition: %d%%d =%d\n\n",number1,number2,number1%number2);
	printf("Relation Operation:\n");
	printf("Less than: %d<%d =%d\n",number1,number2,number1<number2);
	printf("Greater than: %d>%d =%d\n",number1,number2,number1>number2);
	printf("Less than or egual to: %d<=%d =%d\n",number1,number2,number1<=number2);
	printf("Greater than or equal to: %d>=%d %d\n",number1,number2,number1>=number2);
	printf("Equals: %d==%d =%d\n",number1,number2,number1==number2);
	printf("Not equals: %d!=%d =%d",number1,number2,number1!=number2);
	// If the above Relation Operations are true the output is 1 ,if it's false the output is 0.
}
