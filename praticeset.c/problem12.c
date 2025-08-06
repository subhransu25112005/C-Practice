#include <stdio.h>
float avg(int a, int b, int c); // To find avg of two number
float avg(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
int main()
{
    int a, b, c;
    printf("Enter the value of a b and c\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("the total avg is %.2f", avg(a, b, c));
    return 0;
}
