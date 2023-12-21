#include <stdio.h>   
#include <conio.h>
//Circumference and area of a circle
//Aditya Raj - CSE AIML (A) - 11 (CSAIML076)
void main()
{
	float r,a,c;
	clrscr();
	printf("Circumference calculator");
	printf("\nEnter the radius of the circle: ");
	scanf("%f",&r);
	c=2*3.14*r;
	a=3.14*r*r;
	printf("\nCircumference of the circle is: %.2f",c);
	printf("\nArea of the circle is: %.2f",a);
    getch();
}