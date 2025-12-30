#include <stdio.h>
int main() {
    // name:-aniket kumar
    // erp:-10190
    int rows = 3, cols = 3;
    int a[3][3], i, j, max, min;
    printf("Enter elements for a 3x3 matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    max = a[0][0];
    min = a[0][0];
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(a[i][j] > max) {
                max = a[i][j];
            }
            if(a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    printf("\nMaximum element: %d", max);
    printf("\nMinimum element: %d\n", min);
    return 0;
}
// Enter elements for a 3x3 matrix:
// 1 2 3
// 4 5 6
// 7 8 9

// Maximum element: 9
// Minimum element: 1