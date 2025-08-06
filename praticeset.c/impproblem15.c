#include <stdio.h>  //Cheak if given number is prime or not

int main() {
    int num, i, isPrime = 1; // isPrime is a flag: 1 means prime, 0 means not prime

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Edge case: numbers less than or equal to 1 are not prime
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check for factors from 2 to sqrt(num)
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a divisor, not prime
                break;
            }
        }
    }

    // Output result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}