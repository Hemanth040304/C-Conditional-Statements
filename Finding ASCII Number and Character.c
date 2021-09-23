/* C program to find the ASCII Number and Character for the corresponding Character and Number */
#include<stdio.h>
void main()
{
	//Decleration	
	char character;
	
	//Input
	printf("Enter a character:");                   
	scanf("%c",&character);
	
	//Output
	printf("Corresponding ASCII character for the given number is :%d\n",character); 
	
	//Declaration
	int number;                                     
	
	//Input
	printf("Enter a number(from 65-90 or 97-122):");
	
	//Output
	scanf("%d",&number);
	printf("Corresponding ASCII number for the given character is :%c\n",number);       
} 
