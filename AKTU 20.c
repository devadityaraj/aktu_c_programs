#include <stdio.h>
void main()
{   
    int choice;
    printf("Enter 1 for decimal to binary or 2 for binary to decimal: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        int decimal, remain, base;
        long long binary;
        binary = 0;
        base = 1;
        printf("Enter the decimal number: ");
        scanf("%d",&decimal);
        while(decimal > 0)
        {
            remain = decimal % 2;
            binary += remain * base;
            decimal /= 2;
            base *= 10;
        }
        printf("Binary number is: %lld",binary);
    }
    else if(choice==2) {
        long long binary;
        int decimal, remain, base;
        decimal = 0;
        base = 1;
        printf("Enter the binary number: ");
        scanf("%lld",&binary);
        while(binary > 0) {
            remain = binary % 10;
            decimal += remain * base;
            binary /= 10;
            base *= 2;
            }
        printf("Decimal number is: %d",decimal);
    }
    else {
        printf("Please enter the valid choice only.\n");
    }
}
