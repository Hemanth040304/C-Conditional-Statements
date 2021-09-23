/* C Program for Comparition Operation for Two numbers */
#include<stdio.h>
void main()
{
	//Declaration
	int number1=23, number2=17;
	 
	//Taking Input
	ptintf("Arithmetic Operations:\n");
	printf("Addition: ");
	printf("%d+%d = %d\n",number1,number2,number1+number2);
	printf("Sutraction: ");
    printf("%d-%d = %d\n",number1,number2,number1-number2);
	printf("Multiplication: ");
	printf("%d*%d = %d\n",number1,number2,number1*number2);
	printf("Divition: ");
	printf("%d/%d = %d\n",number1,number2,number1/number2);
	printf("Modulo Divition: ");
	printf("%d%%d",number1,number2,number1%number2);
}
