#include <stdio.h>
int sumOfDigits(int n) {
    int sum = 0;
    if (n < 0) n = -n;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int main() {
    // name:-aniket kumar
    // erp:-10190
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = sumOfDigits(num);
    printf("Sum of digits of %d is: %d\n", num, result);
    return 0;
}
// output:-
// Enter a number: 1245
// Sum of digits of 1245 is: 12