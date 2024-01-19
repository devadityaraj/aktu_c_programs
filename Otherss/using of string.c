lower, upper, length, reverse

#include <string.h>
void main() {
  printf("Enter string: ");
  gets(str);
  printf("Length of string is: %s is %d",str,strlen(str);
  printf("Reverse of string is: %s",str,strrev(str);
  printf("Enter string in lowercase : ");
  gets(str);
  printf("\nLowercase to uppercase: %s",strupr(str));
  gets(str);
  printf("Enter any string in uppercase: %s",strlwr(str);
}






compare strings

void main() {
char str1[100], strr2[100];
  int cmp;
  printf("Enter the irst string: ");
  gets(str1);
  printf("\nEnter the second string: ");
  gets(str2);

  cmp = strcmp(str1,str2);
  if(cmp == 0)
    printf("Both the strings are equal.");
  else
    printf("Both strings are not equal");
}



copy string

#include <string.h>
void mian() {
char str1[100].str2[100];
  printf("Enter the first string: ");
  gets(str1);
  str2[100] = strcpy(str2,str1);
  printf("Copoied string is: %s",str2);
}
  
}




concateion of strings n(addition of 2 strings)

void main() {
char str1[100],str2[100];
printf("Enetr the first string: ");
  gets(str1);
  printf("\Enter the second string: ");
  gets(str2);
  printf("After concatention String is: %s",strcat(str1,str2));
}
}
