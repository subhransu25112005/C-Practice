#include <stdio.h>
float c2f(float c);                     //celsius to fharanite
float c2f(float c)
{
    return ((9 * c) / 5) + 32;
}
int main()
{
    float c = 45;
    printf("celsius to faharrenheit for %f is %.2f", c, c2f(c));
    return 0;
}