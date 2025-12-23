#include <stdio.h>

int main() {
    // name:-aniket kumar
    // erp:-10190
    int masterPin;
    int enteredPin;
    int attempts = 3;
    int authenticated = 0; 
    printf("Set your secret PIN: ");
    scanf("%d", &masterPin);
    printf("PIN set successfully!\n\n");
    while (attempts > 0) {
        printf("Enter your PIN to login (%d attempts remaining): ", attempts);
        scanf("%d", &enteredPin);

        if (enteredPin == masterPin) {
            printf("Access Granted! Welcome back.\n");
            authenticated = 1;
            break;
        } else {
            printf("Incorrect PIN.\n");
            attempts--;
        }
    }
    if (authenticated == 0) {
        printf("\nAccess Denied. You have been locked out.\n");
    }

    return 0;
}
// output:-
// Set your secret PIN: 1234
// PIN set successfully!

// Enter your PIN to login (3 attempts remaining): 1456
// Incorrect PIN.
// Enter your PIN to login (2 attempts remaining): 1254
// Incorrect PIN.
// Enter your PIN to login (1 attempts remaining): 1234
// Access Granted! Welcome back.