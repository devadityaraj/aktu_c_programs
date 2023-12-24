#include <stdio.h>
#include <conio.h>

void main()
{
	char operand;
	int num1,num2, result;
	clrscr();
	printf("Enter The Operator =  ");
	scanf("%c",&operand);
	printf("Enter The First Number = ");
	scanf("%d",&num1);
	printf("Enter The Second  Number = ");
	scanf("%d",&num2);
	
	switch(operand) {
		
		case '+':
		result=num1+num2;
		printf("%d + %d = %d",num1,num2,result);
		break;
		
		case '-':
		result=num1-num2;
		printf("%d - %d = %d",num1,num2,result);
		break;
		
		case '*':
		result=num1*num2;
		printf("%d * %d = %d",num1,num2,result);
		break;
		
		case '/':
		result=num1/num2;
		printf("%d / %d = %d",num1,num2,result);
		break;
		
		case '%':
		result=num1+num2;
		printf("%d % %d = %d",num1,num2,result);
		break;
		
		default:
		 printf("ERROR"); 
	}
	getch();
}
		
		
		
				
						
