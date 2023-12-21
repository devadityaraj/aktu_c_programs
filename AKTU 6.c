#include <stdio.h>
#include <conio.h>

void  main() {
    int num1, num2;
clrscr();
    // Input first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Input second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check if the numbers are equal
    if (num1 == num2) {
        printf("The entered numbers are equal.\n");
    } else {
        printf("The entered numbers are not equal.\n");
    }

    getch();
}