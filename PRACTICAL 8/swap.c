#include <stdio.h>
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp; 
}
int main() {
    // name:-aniket kumar
    // erp:-10190
    int x, y;
    printf("Enter two numbers (x and y): ");
    scanf("%d %d", &x, &y);
    printf("\nBefore Swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After Swapping: x = %d, y = %d\n", x, y);
    return 0;
}
// output:-
// Enter two numbers (x and y): 12 15

// Before Swapping: x = 12, y = 15
// After Swapping: x = 15, y = 12 