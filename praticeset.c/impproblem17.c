#include <stdio.h> // Check if a number is a palindrome
int main() {
    int n, original, rem, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (original == rev) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}