#include <stdio.h>
#include <conio.h>
void main() {
   int arraysize;
   int i,sum = 0;
   clrscr();
   printf("Enter the size of the array: ");
   scanf("%d",&arraysize);
   int array[arraysize];
   printf("\nEnter The Elements: ");
   for(i=0; i<arraysize; i++) {
       scanf("%d",&array[i]);
   }
    for(i=0; i<arraysize; i++) {
        sum +=array[i];
    }
    printf("The sum of the elements is: %d",sum);
   getch();
}
