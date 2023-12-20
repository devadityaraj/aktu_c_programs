#include <stdio.h>
#include <conio.h>

void main() {
    int num, digit;
    int sum=0;
    clrscr();
    printf("Enter number of Any Digits: ");
    scanf("%d", &num);
    
    while (num > 0) {
        digit = num % 10;
        sum += digit;
    }
    printf("Sum of the digits: %d\n", sum);

 getch();
       
} getch();
       
}