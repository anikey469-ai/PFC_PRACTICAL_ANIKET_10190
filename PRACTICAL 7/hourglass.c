#include <stdio.h>
int main() {
    // name:-aniket kumar
    // erp:10190
    int n, i, j;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = 2; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// output:-
// Enter the value of n: 5
// *********
//  ******* 
//   *****  
//    ***   
//     *    
//    ***   
//   *****  
//  ******* 
// *********