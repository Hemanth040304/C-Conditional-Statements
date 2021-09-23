/* C Program to find vowel with switch coditional statment */
#include<stdio.h>
void main()
{
	//Declaration
	char choice;
	
	//Taking Input
	printf("Enter a character\n");
	scanf("%c",&choice);
	
	//Output
	switch(choice)
	{
		
		case 'a':
			printf("Vowel");
			break;
		case 'e':
			printf("Vowel");
			break;
		case 'i':
			printf("Vowel");
			break;
		case 'o':
			printf("Vowel");
			break;
		case 'u':
			printf("Vowel");
			break;
		case 'A':
			printf("Vowel");
			break;
		case 'E':
			printf("Vowel");
			break;
		case 'I':
			printf("Vowel");
			break;
		case 'O':
			printf("Vowel");
			break;
		case 'U':
			printf("Vowel");
			break;
		default :
			printf("Consonant");
			break;
	}
}
