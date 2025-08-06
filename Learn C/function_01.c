#include<stdio.h>

int sum(int a, int b) {
    int c;
    c = a + b;
    return c;
}

int main() {
    int n;
    n = sum(2, 8);
    printf("The sum is %d\n", n); // Added print statement to display the result
    return 0;
}
