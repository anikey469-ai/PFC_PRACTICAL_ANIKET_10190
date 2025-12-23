#include <stdio.h>
int main() {
    //name:-aniket kumar
    //erp:-10190
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
// }
// output:
// Enter the number of rows: 4
// A
// AB
// ABC
// ABCD
