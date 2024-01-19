// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>


void length() {
  char str[150],
  printf("Enter string: ");
  gets(str);
  printf("\nLength of string is: %d",strlen(str));
}

void copy() {
    char str1[150],str2[150];
    printf("Enter the string to copy: ");
    gets(str1);
    str2[100] = strcpy(str2,str1);
    printf("\nThe copied string is: %s",str2);
}
    
void concatetion() {
    char str1[100],str2[100];
    printf("Enetr the first string: ");
    gets(str1);
    printf("\nEnter the second string: ");
    gets(str2);
    printf("\nAfter concatention String is: %s",strcat(str1,str2));
}
    

}
void main() {
    int choice;
    printf("Enter your choice: \n");
    printf("1. To find length of the string. \n2. To copy the string \n 3. To concateion of strings");
    scanf("%d",&choice);
    if(choice==1) {
        length();
    }
    else if(choice==2) {
        copy();
    }
    else if(choice==4) {
        concatetion();
    }
    else {
        printf("wrong choice please enter the valid choice");
        main();
    }
    
}
