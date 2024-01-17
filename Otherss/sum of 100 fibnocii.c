#include <stdio.h>
#include <conio.h>
void main() {
    float term=0,term2=1,next,size,i,sum=0;
    clrscr();
    printf("Enter number of terms in seris: ");
    scanf("%f",&size);
    for(i=2;i<=size;i++) {
        next=term+term2;
        term=term2;
        term2=next;
        sum=sum+term;
        printf("\n%.0f",term);
     }
     printf("\nsum is: %.2f",sum);
  getch();
}
