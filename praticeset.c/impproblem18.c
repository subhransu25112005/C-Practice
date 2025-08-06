#include <stdio.h>    // Check if a number is an Armstrong number
int main() {
    int n, rem, sum = 0, original;
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    if (original == sum) printf("Armstrong Number");
    else printf("Not Armstrong Number");
    return 0;
}