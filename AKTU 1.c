#include <stdio.h>
void main()
{
	int s1,s2,s3,s4,s5,sum,percentage;
	printf("Sum and percentage Calculator Of Five Subjects");
	printf("\n\nEnter the marks obtained in Subject 1: ");
	scanf("%d",&s1);
	printf("\nEnter the marks obtained in Subject 2: ");
	scanf("%d",&s2);
	printf("\nEnter the marks obtained in Subject 3: ");
	scanf("%d",&s3);
	printf("\nEnter the marks obtained in Subject 4: ");
	scanf("%d",&s4);
	printf("\nEnter the marks obtained in Subject 5: ");
	scanf("%d",&s5);
	sum=s1+s2+s3+s4+s5;
	printf("\nStudent obtained %d marks out of 500",sum);
	percentage=sum*100/500;
	printf("\nStudent obtained %d percentage",percentage);
}}