#include <stdio.h>
#include <conio.h>
void main()
{ 
    int reverse,num;
    clrscr();
    reverse = 0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num > 0)
    { 
       reverse = reverse * 10 + num % 10; 
       num = num / 10;
    } 
  printf("Reverse of the number is: %d",reverse);
  getch();
} 
