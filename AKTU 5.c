#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter the First number: ");
	scanf("%d",&a);
	printf("Enter the Second number: ");
	scanf("%d",&b);
	printf("Before swapping; a = %d and b = %d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After swapping: a= %d and b = %d",a,b);
	getch();
}