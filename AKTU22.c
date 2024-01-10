  #include <stdio.h>
  #include <conio.h>
  void main() {
   int arraysize;
   int i, sum1=0, sum2=0;
     clrscr();
     printf("Enter the size of the array: ");
     scanf("%d",&arraysize);
     int array1[arraysize];
     int array2[arraysize];
     int array3 [2];
     printf("\nEnter the elements for 1st array: ");
     for(i=0; i<arraysize; i++) {
         scanf("%d",&array1[i]);
     }
     for(i=0; i<arraysize; i++) {
         sum1 += array1[i];
     }
     printf("\nEnter the elements for 2nd array: ");
     for(i=0; i<arraysize; i++) {
         scanf("%d",&array2[i]);
     }
     for(i=0; i<arraysize; i++) {
         sum2 += array2[i];
     }
      array3[1]=sum1; 
      array3[2]=sum2;
      printf("\nThe sum of both arrays are: ");
          printf("%d ",array3[1]);
          printf("%d",array3[2]);
    getch();
  }
