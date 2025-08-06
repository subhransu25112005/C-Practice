#include <stdio.h>

int main() {
    int n, rev = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;           // Get the last digit
        rev = rev * 10 + rem; // Append it to reversed
        n /= 10;                      // Remove the last digit
    }

    printf("Reversed number: %d\n", rev);
    return 0;
}