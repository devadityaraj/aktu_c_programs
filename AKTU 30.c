//WAP to swap two elements using the concept of pointers.
#include <stdio.h>
#include <conio.h>

void main() {
    int num1, num2, *ptr1, *ptr2, swap;
    clrcsr();
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Before swapping: num1 = %d, num2 = %d\n", *ptr1, *ptr2);

    swap = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = swap;

    printf("After swapping: num1 = %d, num2 = %d\n", *ptr1, *ptr2);
    getch();
}
