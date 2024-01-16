#include <stdio.h>
#include <conio.h>
void main() {
    int num, i, location, search;
    clrscr();
    printf("Enter the number of elememts: ");
    scanf("%d",&num);
    int array[num];
    printf("Enter the %d elements of array: ",num);
    for(i=0; i<num; ++i) {
        scanf("%d",&array[i]);
    }
     printf("Enter element to search: ");
    scanf("%d",&search);
     
    for(i=0;i<num;++i) {
        if(array[i]==search)
          {
         printf("Element found at index %d",i+1);
              
          }
}
  getch();
}
