#include<stdio.h>
float f(float);
float f(float m) {
    return m * 9.8;
}
int main() {
    int m = 45;
    printf("The value of force is %.2f", f(m));
    return 0;
}
