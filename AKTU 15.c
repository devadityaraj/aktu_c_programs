#include <stdio.h>
#include <conio.h>
void main ()
{
  int terms, first, second, next;
int i;
clrscr();
first = 0;
second = 1;
printf("Enter the number of terms in the Fibonacci Series: ");
scanf("%d",&terms);
printf("\nFABNOCII SERIES");
for(i=0; i<terms; i++)
{
printf("\n%d",first);
next = first + second;
first = second;
second = next;
}
getch();
}
