#include <stdio.h>
#include <conio.h>

void main() {
    int number,i,factorial;
    clrscr();
    factorial=1;
    printf("Enter the number to find the factorial: ");
    scanf("%d",&number);
    for(i=1; i<=number; ++i)
        { 
            factorial *= i;
        }
    printf("The factorial of %d is %d",number,factorial);
    getch();
}
