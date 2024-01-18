#include<stdio.h>
#include<conio.h>

void main() {
    int n, i, j, k;
    printf("Enter the order of matrix: ");
    scanf("%d", &n);
    int A[n][n], B[n][n], C[n][n];

    printf("Enter elements of first matrix\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            C[i][j] = 0;

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            for(k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    printf("Output Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
  getch();
}
