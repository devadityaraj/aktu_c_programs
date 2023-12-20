#include <stdio.h>
#include <conio.h>

void main()
{
	
	int m1,m2,m3,m4,m5,sum;
	float per;
	
	clrscr();
	
	printf("Enter The Marks in Subject 1: ");
	scanf("%d",&m1);
	
	printf("\nEnter The Marks in Subject 2: ");
	scanf("%d",&m2);
	
	printf("\nEnter The Marks in Subject 3: ");
	scanf("%d",&m3);
	
	printf("\nEnter The Marks in Subject 4: ");
	scanf("%d",&m4);
	
	printf("\nEnter The Marks in Subject 5: ");
	scanf("%d",&m5);
	
	sum=m1+m2+m3+m4+m5;
	per=sum*100/500;
	
	if(per>=90) {
		if(per<=100) {
		printf("\nGrade - A");
		}
	}
	
	else if(per>=80) {
		if(per<=89) {
			printf("\nGrade - B");
		}
	}
	
	else if(per>=60) {
		if(per<=79) {
			printf("\nGrade - C");
		}
	}
	
	else if(per>0) {
			if(per<=59) {
				printf("\nGarde - C");
			}
	}
	
	else {
		printf("Either You Or Student Is A Miracle");
	}
	
	getch();
	
}	
