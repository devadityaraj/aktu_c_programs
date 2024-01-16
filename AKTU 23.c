#include <stdio.h>
#include <conio.h>
void main() {
    int array[100];
    int i, max, min, size;
    clrscr();
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++) {
        scanf("%d", &array[i]);
    }
    max = array[0];
    min = array[0];
    for(i=1; i<size; i++) {
        if(array[i] > max) {
            max = array[i];
        }
        if(array[i] < min) {
            min = array[i];
        }
    }
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);
    getch();
}
