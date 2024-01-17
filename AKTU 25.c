#include <stdio.h>
#include <conio.h>

void main() {
    int size, i;
  clrscr();
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements: ",size);
    for(i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
  getch();
}
