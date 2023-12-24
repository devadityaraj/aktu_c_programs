#include <stdio.h>
#include <conio.h>

void  main()
{
    int num1, num2;
    clrscr();
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 == num2) {
        printf("The entered numbers are equal.\n");
    } else {
        printf("The entered numbers are not equal.\n");
    }
    getch();
}
