#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        sum += a[i][i]; 
    }
    printf("Sum of Primary Diagonal: %d\n", sum);
    return 0;
}